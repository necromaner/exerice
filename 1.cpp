#include<iostream.h>
#define N 1000

int input(int a[N])
{
	int i=0,n;
	cout<<"���볤�ȣ�";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"�������"<<i+1<<"����:";
		cin>>a[i];
	}
	return i;
}
void output(int a[N],int j)
{
	int i,k,m,b=0;
	cout<<"���볤�ȣ�";
	cin>>m;
	cout<<"������Ϊ �� "<<'\n';
	for(i=0;i<j;i++)
	{
		for(k=i;k<j;k++)
		{
			if(a[i]+a[k]==m)
			{
				cout<<a[i]<<"  "<<a[k]<<endl;
				b++;
			}
		}
	}
	if(b==0)
	{
		cout<<"����";
	}
	cout<<'\n'<<"������";
}
 
int main ()
{
	int a[N];
	int j;
	j=input(a);
	output(a,j);
}