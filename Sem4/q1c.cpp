#include<iostream>
using namespace std;
class JACOBI
{
	public:
	void jacobi(float a[10][10],float b[10],float x[10],int n);
};

void JACOBI :: jacobi(float a[10][10],float b[10],float x[10],int n)
{
	float xg[10],s;
	int i,j,flag,itr;
	float eps[10];
	float tol=1e-06;
	//To initialize all initial values xg[] to 0
	for(i=0;i<n;i++)
	{
		xg[i]=0;
		x[i]=0;
	}
	flag=1;
	itr=0;
	while(flag==1)
	{
		flag=0;
		itr=itr+1;
		for(i=0;i<n;i++)
		{
			s=0;
			for(j=0;j<n;j++)
			if(i != j)
			{
				s=s+a[i][j]*x[j];
			}
			x[i]=(b[i]-s)/a[i][i];
		}
		//To calculate eps
		for(i=0;i<n;i++)
		{
			eps[i]=x[i]-xg[i];
			if(eps[i]<0)
			eps[i]=-eps[i];
		}
		//To test convergence
		for(i=0;i<n;i++)
		if(eps[i]>tol)
		{
			flag=1;
			break;
		}
		//To update guess values
		for(i=0;i<n;i++)
		xg[i]=x[i];
	}
	cout<<endl<<"Number of iterations taken="<<itr<<endl;
}
int main()
{
	float a[10][10],b[10],x[10];
	int i,n,j;
	system("clear");
	cout<<endl<<"Enter no:of equations(1-10)=";
	cin>>n;
	cout<<endl<<"Enter coefficients of input matrices---->\n";
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<"a["<<i<<"]["<<j<<"]=";
			cin>>a[i][j];
		}
		cout<<"b["<<i<<"]=";
		cin>>b[i];
	}
	JACOBI J;
	J.jacobi(a,b,x,n);
	//To display all roots
	for(i=0;i<n;i++)
		cout<<"Root["<<(i+1)<<"]="<<x[i]<<endl;
	return 0;
}
		