//case 4
//non linear equation using bisection method
using namespace std;
#include<iostream>
class BISECTION{
public:
	int bisection(float x[10]);
	float function_1(float x1);
};

int BISECTION::bisection(float x[]){
float c,f1,f2,f12,f3,a,b,ff;
float x1;
int n;
a=-50;
	for(x1=-49.99;x1<=50;x1=x1+.01){
	b=x1;
	f1=function_1(a);
	f2=function_1(b);
	f12=f1*f2;
		if(f12<0){
			do{
			c=(a+b)/2;
			f3=function_1(c);
				if(f3<0 && f1<0)
				a=c;
				else if(f3<0&&f2<0)
				b=c;
				else if(f3>0&&f1>0)
				a=c;
				else if(f3>0&&f2>0)
				b=c;
				else if(f3<0&&f2>0)
				a=c;
				else if(f3>0&&f1<0)
				b=c;
			f1=function_1(a);
			f2=function_1(b);
			if(f3<0)
			ff=-f3;
			else
			ff=f3;
			if(ff<1e-06)
			{
			x[n++]=c;
			break;	
			}				
			}while(1==1);	
		}
	a=x1;
	}
	return n;
}
float BISECTION::function_1(float x1){
float y;
y=x1*x1-3;
return y;
}

int main(){
float x[10];
int i,n;
system("clear");
BISECTION B;
n=B.bisection(x);
cout<<endl<<"Roots are--->\n";
	for(i=0;i<n;i++)
	cout<<"x["<<i<<"]="<<x[i]<<endl;
return 0;
}
