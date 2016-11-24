#include<bits/stdc++.h>
using namespace std;
int HASH[26];
int count()
{
	int c=0;
	for(int i=0;i<26;i++)
		if(HASH[i]!=0)
			c++;
	return c;
}
int main()
{
	string s;
	cin>>s;
	for(int i=0;i<s.length();i++)
	{
		HASH[s[i]-'a']++;
	}
	if(count()&1)
		cout<<"IGNORE HIM!\n";
	else
		cout<<"CHAT WITH HER!\n";
}
