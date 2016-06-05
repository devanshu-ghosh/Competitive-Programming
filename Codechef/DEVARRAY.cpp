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
inline int min(int a,int b)
{
	if(a>b)
		return b;
	return a;
}
inline int max(int a,int b)
{
	if(a>b)
		return a;
	return b;
}
int main()
{
	ios_base::sync_with_stdio(0);
	int N,Q;
	cin>>N>>Q;
	int _min=MOD,_max=-MOD,a;
	while(N--)
	{
		cin>>a;
		_min = min(_min,a);
		_max = max(_max,a);
	}
	while(Q--)
	{
		cin>>a;
		if(a>=_min && a<=_max)
			cout<<"Yes\n";
		else
			cout<<"No\n";
	}
	return 0;
}

