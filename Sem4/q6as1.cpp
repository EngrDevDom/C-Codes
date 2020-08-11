#include<iostream>
using namespace std;
class Simpson13
{
	public:
		double simpson13(double a,double b,long int n);
		double function_1(double x);
};

double Simpson13 :: simpson13(double a,double b,long int n)
{
	double yon,y1,y2,it;
	long int i;
	double h;
	h=(b-a)/n;
	yon=function_1(a)+function_1(b);
	y1=0;
	y2=0;
	for(i=1;i<n;i++)
	{
		if(i%2!=0)
			y1=y1+function_1(a+i*h);
		else
			y2=y2+function_1(a+i*h);
	}
	it=(1.0/3.0)*h*(yon+4*y1+2*y2);
	return it;
}

double Simpson13 :: function_1(double x)
{
	double y;
	y=4.0/(1+x*x);
	return y;
}

int main()
{
	double a,b,it;
	long int n;
	system("clear");
	do{
		cout<<endl<<"Enter number of intervals:";
		cin>>n;
	}while(n%2!=0);
	cout<<"Enter Lower limit:";
	cin>>a;
	cout<<"Enter Upper limit:";
	cin>>b;
	Simpson13 S;
	it=S.simpson13(a,b,n);
	cout<<"\nValue of integral using Simpson's 1/3 rule:"<<it<<endl;
	return 0;
}
	