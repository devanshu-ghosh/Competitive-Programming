#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	string s;char ch;
	cin>>s;
	int l=s.length(),i,flag=1;
	if(l==1)
	{
		if(islower(s[0]))
		{
			char c=toupper(s[0]);
			cout<<c<<endl;
		}
		return 0;
	}
	for(i=1;i<l;i++)
	{
		if(!isupper(s[i]))
		{
			flag=0;
			break;
		}
	}
	if(flag==1)//it satisfies the condition
	{
		//we change the case
		string ans="";
		ch=s[0];
		if(isupper(ch))
			ch=tolower(ch);
		else
			ch=toupper(ch);
		ans+=ch;
		for(i=1;i<l;i++)
		{
			ch=s[i];
			ans+=tolower(ch);
		}
		cout<<ans<<endl;
	}
	else
		cout<<s<<endl;
}
	
	
