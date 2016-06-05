#include<iostream>
using namespace std;
int A[26];
int main()
{
	int T,index;
	cin>>T;
	string s,p;
	while(T--)
	{
		cin>>s;
		cin>>p;
		int flag=0;
		for(int i=0;i<s.length();i++)
		{
			index=s[i]-'a';
			A[index]=1;
		}
		for(int i=0;i<p.length();i++)
		{
			index=p[i]-'a';
			if(A[index]==1)
			{
				flag=1;
				break;
			}
		}
		if(flag==1)
			cout<<"YES\n";
		else
			cout<<"NO\n";
		for(int i=0;i<26;i++)
			A[i]=0;
	}
}
