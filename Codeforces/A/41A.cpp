#include<iostream>
using namespace std;
int main()
{
	string s,t;
	cin>>s>>t;
	int i=0,j=s.length()-1,flag=1;
	if(s.length()==1)
	{
		if(s[0]==t[0]) cout<<"YES\n";
		else	cout<<"NO\n";
		return 0;
	}
	if(s.length()!=t.length())
	{
		cout<<"NO\n";
		return 0;
	}
	while(i<s.length())
	{
		if(s[i]!=t[j])
		{
			flag=0;
			break;
		}
		i++;
		j--;
	}
	if(flag==1)
		cout<<"YES\n";
	else
	{
		cout<<"NO\n";
	}
}
