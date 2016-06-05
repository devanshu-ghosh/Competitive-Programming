#include<iostream>
using namespace std;
int main()
{
	long long int a,b,s;
	cin>>a>>b>>s;
	//we can always map other quadrants into 1st
	if(a<0) a*=-1;
	if(b<0) b*=-1;
	if(s<(a+b))
	{
		cout<<"No\n";
	}
	else if(s==(a+b))
	{
		cout<<"Yes\n";
	}
	else
	{
		s-=(a+b);
		if(s&1)
			cout<<"No\n";
		else
			cout<<"Yes\n";
	}
}
