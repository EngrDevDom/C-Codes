			/****************************/
			/*          CLOCK           */
			/****************************/
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
#include<stdlib.h>
#include<dos.h>
#define PI 3.141593
#define R 170
#define sc setcolor
char *month[]={"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};
void Box(int x,int y,int x1,int y1,int width,int color,int color1)
     {int i;
     for(i=0;i<width;i++)
	    {sc(color);line(x+i,y+i,x+i,y1-i);line(x+i,y+i,x1-i,y+i);
	    sc(color1);line(x+i,y1-i,x1-i,y1-i);line(x1-i,y+i,x1-i,y1-i);}
     }
void main(){int gd=DETECT,gm,midx,midy,i;
	initgraph(&gd,&gm,"C:\\TC\\BGI");
	midx=getmaxx()/2;
	midy=getmaxy()/2;
	setbkcolor(0);      sc(15);
	setfillstyle(1,10); fillellipse( midx , midy , 207 , 207 );
	setfillstyle(1,7);  fillellipse( midx , midy , 200 , 200 );
     for(i=0;i<12;i++)  pieslice( midx , midy , i*30 , (i+1)*30 , 200 );
	sc(7);       fillellipse( midx , midy , 185  , 185 );
	settextstyle( TRIPLEX_FONT , HORIZ_DIR , 1 );
	char ss[90];int P,Q;
     for(i=1;i<=12;i++){ sc(1); sprintf(ss,"%d",i);
	if(i==5)     { P=10 ; Q=-10; }
	else if(i==6){ P=20 ; Q=-5; }
	else if(i==4)  Q=-10;
	else if(i==7){ P=7  ; Q=5; }
	else         { P=0  ; Q=0; }//show number
	outtextxy( midx+185*sin(PI*30*i/180)+Q , midy-P-185*cos(PI*30*i/180) , ss);}
     while(!kbhit()){
		settextstyle( TRIPLEX_FONT , HORIZ_DIR , 1 );
		sc( 9 );outtextxy( midx-52 , midy-132 , "IECH SETHA" );
		struct dosdate_t date;	_dos_getdate(&date);
		sprintf( ss , "%d" , date.year );
		sc(15); outtextxy( midx-20 , 5 , ss );//show year
		settextstyle( 0 , 0 , 1 ); sc( 4 );
		sprintf( ss , "%d %s" ,date.day,month[date.month-1] );
		outtextxy( 297 , midy-150 , ss );//show date
		sc(12); outtextxy( midx-15 , midy+150 , "RUPP" );
		Box( midx-26 , midy-156 , midx+26 , midy-140 , 1 , 8 , 15 );
		//box of date
		struct dostime_t t; _dos_gettime(&t);
		if(t.hour>12)t.hour=t.hour-12;
		sprintf( ss,"%02d:%02d:%02d",t.hour,t.minute,t.second );
		setfillstyle(1,7);bar( midx+160 , midy-9 , midx+177 , midy+9 );
	   if(t.minute==0&&t.hour==0&&t.second==0)  bar(midx-26,midy-156,midx+126,midy-140);
	   if(t.second==0)             bar( midx+135 , midy-9 , midx+150 , midy+9 );
	   if(t.second==0&&t.minute==0)bar( midx+112 , midy-9 , midx+128 , midy+9 );
		sc(4); outtextxy( midx+112 , midy-2 , ss );
		Box( midx+108 , midy-10 , midx+178 , midy+10 , 1 , 8 , 15 );
		//box of time
	   sc(7);line( midx ,midy , midx+sin(PI*6*(t.second-1)/180)*R , midy-cos(PI*6*(t.second-1)/180)*R );
	if(t.second%10==0)for(i=-3;i<=3;i++)
		 line( midx+i , midy+i , midx+sin(PI*(6*t.minute+(t.second-10)/10)/180)*(R-20) , midy-cos(PI*(6*t.minute+(t.second-10)/10)/180)*(R-20) );
	if(t.second==0)for(i=-4;i<5;i++)
		 line( midx+i , midy+i , midx+sin(PI*(30*t.hour+(t.minute-2)/2)/180)*(R-70)    , midy-cos(PI*(30*t.hour+(t.minute-2)/2)/180)*(R-70) );
		//line of second
	   sc(0);line( midx   , midy   , midx+sin(PI*6*t.second/180)*R , midy-cos(PI*6*t.second/180)*R );
	for(i=-3;i<=3;i++)//line of minute
		 line( midx+i , midy+i , midx+sin(PI*(6*t.minute+t.second/10)/180)*(R-20)      , midy-cos(PI*(6*t.minute+t.second/10)/180)*(R-20) );
	for(i=-4;i<5;i++)//line of hour
		 line( midx+i , midy+i , midx+sin(PI*(30*t.hour+t.minute/2)/180)*(R-70)        , midy-cos(PI*(30*t.hour+t.minute/2)/180)*(R-70));
	  if(t.minute==0&&t.second<=15)sound(600*(t.second+5)/5);
	  else nosound();
       setfillstyle(1,4);fillellipse( midx , midy , 5 , 5 );
			delay(100);}//end while
	closegraph();
	}
