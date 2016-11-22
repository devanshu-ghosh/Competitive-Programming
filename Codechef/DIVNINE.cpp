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
int _min(int a,int b)
{
	if(a<b)
		return a;
	return b;
}
int main()
{
	ios_base::sync_with_stdio(0);
	int T;
	string s;
	cin>>T;
	while(T--)
	{
		int sum=0;
		cin>>s;
		for(int i=0;i<s.length();i++)
		{
			sum+= s[i]-'0';
		}
		if(sum%9==0)
			cout<<"0\n";
		else
		{
			int diff = 9 - sum%9;
			cout<<_min(diff,sum%9)<<endl;
		}
	}
	return 0;
}

