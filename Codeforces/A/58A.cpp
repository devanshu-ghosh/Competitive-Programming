#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s,p="hello";
	cin>>s;
	int k=0,flag=0;
	if(s.length()<5)
	{
		cout<<"NO\n";
		return 0;
	}
	for(int i=0;i<s.length();i++)
	{
		if(s[i]==p[k])
			k++;
		if(k==5)
		{
			flag=1;
			break;
		}
	}
	if(flag)
		cout<<"YES\n";
	else
		cout<<"NO\n";
}
