#include<iostream.h>
#define N 1000

int input(int a[N])
{
	int i=0,n;
	cout<<"输入长度：";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"请输入第"<<i+1<<"个数:";
		cin>>a[i];
	}
	return i;
}
void output(int a[N],int j)
{
	int i,k,m,b=0;
	cout<<"输入长度：";
	cin>>m;
	cout<<"输出结果为 ： "<<'\n';
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
		cout<<"错误";
	}
	cout<<'\n'<<"输出完毕";
}
 
int main ()
{
	int a[N];
	int j;
	j=input(a);
	output(a,j);
}