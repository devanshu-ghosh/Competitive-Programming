#include<iostream>
#include<string>
using namespace std;
int main()
{
	int T;
	cin>>T;
	string s;
	while(T--)
	{
		cin>>s;
		int len=s.length();
		//count the no of l,t,i,m,e
		int l=0,t=0,i=0,m=0,e=0;
		int j;
		for(j=0;j<len;j++)
		{
			char ch=s.at(j);
			if(ch=='L') l++;if(ch=='T') t++;
			if(ch=='I') i++;if(ch=='M') m++;
			if(ch=='E') e++;
		}
		if(len<=9)
		{
			if(len==9)
			{
				if(l==2 && t==2 && i==2 && m==2 && e==1) 
					cout<<"YES\n";
				else cout<<"NO\n";
			}
			else if(len==5)
			{
				if(l==1 && t==1 && i==1 && m==1 && e==1 )
					cout<<"YES\n";
				else cout<<"NO\n";
			}
			else cout<<"NO\n";
		}
		else
		{
			if(l>=2 && t>=2 && i>=2 && m>=2 && e>=2) 
					cout<<"YES\n";
			else cout<<"NO\n";
		}
	}
	return 0;
}
