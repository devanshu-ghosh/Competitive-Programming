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
int main()
{
	ios_base::sync_with_stdio(0);
	int T;
	cin>>T;
	string s;
	while(T--)
	{
		cin>>s;
		s=s+"1";
		string ans="",word="";
		int c=0;
		//maybe we can start one early
		c=s[0]-'0';
		for(int i=1;i<s.length();i++)
		{
			if(s[i]>='1' && s[i]<='9')
			{
				//we concatenate it c times
				while(c--)
				{
					ans+=word;
				}
				//assign new count
				c=s[i]-'0';
				word.clear();
				//we have got a word , now we make the answer
			}
			else
			{
				word.push_back(s[i]);
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}

