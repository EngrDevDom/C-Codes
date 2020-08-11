#include<iostream>
using namespace std;
class MAT_INV
{
	public:
	void mat_inv(float a[10][10],float b[10],float x[10],int n);
	void display(float aug[10][20],int n);
};

void MAT_INV :: mat_inv(float a[10][10],float b[10],float x[10],int n)
{
	int i,j,k,n1;
	float am,s;
	float aug[10][20],inverse[10][10];
	//To initialize 0 to aug[][] matrix
	n1=2*n;
	for(i=0;i<n;i++)
		for(j=0;j<n1;j++)
			aug[i][j]=0;
	//To copy a[][] to aug[][]
	for(i=0;i<n;i++)
		for(j=0;j<n1;j++)
			aug[i][j]=a[i][j];
	//To add 1 in the 2nd half of the aug[][] matrix
	for(i=0;i<n;i++)
		aug[i][i+n]=1;
		cout<<"Elements in initial augmented matrix---->\n";
		display(aug,n);
	
	//To start matrix inversion method
	for(i=0;i<n;i++)
	{
		am=aug[i][i];
		for(j=0;j<n1;j++)
			aug[i][j]=aug[i][j]/am;
		for(j=0;j<n;j++)
			if(i != j)
			{
				am=aug[j][i];
				for(k=0;k<n1;k++)
					aug[j][k]=aug[j][k]-aug[i][k]*am;
			}
			cout<<"Elements in augmented matrix---->\n";
			display(aug,n);
	}
	//To collect inverse matrix
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			inverse[i][j]=aug[i][j+n];
	//To display elements in inverse matrix
	cout<<endl<<"Elements in inverse matrix---->\n";
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			cout<<inverse[i][j]<<"\t";
		cout<<endl;
	}
	//To calculate roots by taking product of inverse[][] and b[]
	for(i=0;i<n;i++)
	{
		s=0;
		for(j=0;j<n;j++)
			s=s+inverse[i][j]*b[j];
		x[i]=s;
	}
}
void MAT_INV :: display(float aug[10][20],int n)
{
	int i,j,n1;
	char ch;
	n1=2*n;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n1;j++)
			cout<<aug[i][j]<<"\t";
		cout<<endl;
	}
	cout<<"Type any key and press enter---->";
	cin>>ch;
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
	MAT_INV MI;
	MI.mat_inv(a,b,x,n);
	//To display all roots
	for(i=0;i<n;i++)
		cout<<"Root["<<(i+1)<<"]="<<x[i]<<endl;
	return 0;
}
		
		
	