#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int l=s.length(),a=0,b=0,c=0;
	char n;
	for(int i=0;i<l;i=i+2)
	{
		n=s[i]-'0';
		if(n==1)	a++;
		else if(n==2)	b++;
		else	c++;
	}
	//now we print
	string ans="";
	while(a--)
		ans.push_back(char(1+'0'));
	while(b--)
		ans.push_back(char(2+'0'));
	while(c--)
		ans.push_back(char(3+'0'));
	//cout<<ans<<endl;
	int len=ans.length();
	if(len==1)
	{
		cout<<ans[0]<<endl;
	}
	else
	{
		for(int i=0;i<(len-1);i++)
			cout<<ans[i]<<"+";
		cout<<ans[len-1]<<endl;
	}
}
