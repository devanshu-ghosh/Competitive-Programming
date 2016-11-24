#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cin>>a>>b;
	if(a>b)
	{
		int s=a,r;
		while(a>=b)
		{
			s+=a/b;
			r=a%b;
			a/=b;
			a+=r;
		}
		cout<<s<<endl;
	}
	else if(a==b)
	{
		cout<<a+1<<endl;
	}
	else
	{
		cout<<a<<endl;
	}
}
