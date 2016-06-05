#include <iostream>
#include <sstream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <cctype>
#include <string>
#include <vector>
#include <list>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <algorithm>
#define MOD 1000000007
typedef long long int ll;
using namespace std;
int HASH[26];
string s;
int even()
{
	int flag=1;
	int len=s.length();
	int i=0,j=(len)/2;
	while((i+j)<=len)
	{
		if(s[i++]!=s[j++])
		{
			flag=0;
			break;
		}
	}
	return flag;
}
//failing for ababc
int main()
{
	ios_base::sync_with_stdio(0);
	int D;
	cin>>D;
	while(D--)
	{
		cin>>s;
		int len= s.length();
		if(len==1)
		{
			cout<<"NO\n";continue;
		}
		if(len&1)//odd
		{
			//only one odd value
			int count=0,flag=1;
			for(int i=0;i<len;i++)
			{
				HASH[s[i]-'a']++;
			}
			for(int i=0;i<26;i++)
			{
				if(HASH[i]==0) continue;
				if(HASH[i]&1)
				{
					count++;
					if(count>1)
					{
						flag=0;
						break;
					}
				}
			}
			if(flag==0) cout<<"NO\n";
			else cout<<"YES\n";
			for(int i=0;i<26;i++)
				HASH[i]=0;
			
		}
		else//even
		{
			int flag=even();
			if(flag==1)	cout<<"YES\n";
			else	cout<<"NO\n";
		}
	}
	return 0;
}

