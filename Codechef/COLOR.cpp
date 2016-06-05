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
	ll T,N;
	string s;
	cin>>T;
	while(T--)
	{
		cin>>N;
		cin>>s;
		ll r=0,b=0,g=0;
		for(int i=0;i<s.length();i++)
		{
			if(s[i]=='R')
				r++;
			else if(s[i]=='G')
				g++;
			else
				b++;
		}
		ll max = (r>=b)?r:b;
		max = (g>=max)?g:max;
		max = (N) - max;
		cout<<max<<endl;
	}
	return 0;
}

