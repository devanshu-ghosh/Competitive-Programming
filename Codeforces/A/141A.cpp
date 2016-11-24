#include<iostream>
using namespace std;
int HASH[26];
int main()
{
	string s1,s2,s3;
	cin>>s1>>s2>>s3;
	int i;
	for(i=0;i<s1.length();i++)
		HASH[s1[i]-'A']++;
	for(i=0;i<s2.length();i++)
		HASH[s2[i]-'A']++;
	for(i=0;i<s3.length();i++)
		HASH[s3[i]-'A']--;
	int flag=1;
	for(i=0;i<26;i++)
	{
		if(HASH[i]!=0)
		{
			flag=0;
			break;
		}
	}
	if(flag==0)
		cout<<"NO\n";
	else
		cout<<"YES\n";
}
