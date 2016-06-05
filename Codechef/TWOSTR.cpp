#include<iostream>
#include<string>
using namespace std;
int main()
{
	int T,i,flag=1;
	string s1,s2;
	cin>>T;
	while(T--)
	{
		cin>>s1>>s2;
		int len=s1.length();
		for(i=0;i<len;i++)
		{
			char c1=s1.at(i);
			char c2=s2.at(i);
			if(c1=='?' || c2=='?')
				continue;
			else if(c1==c2) flag=1;
			else
			{
				flag=0;
				break;
			}
		}
		if(flag==1) cout<<"Yes\n";
		else cout<<"No\n";
		flag=1;
	}
	return 0;
}
