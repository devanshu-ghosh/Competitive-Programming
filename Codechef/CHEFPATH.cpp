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
	unsigned long long int T,N,M;//maybe sign bit is the problem
	cin>>T;
	while(T--)
	{
		int flag=0;
		cin>>N>>M;
		int ns=N&1;
		int ms=M&1;
		if(ns==1 && ms==1)//both odd
		{
			flag=0;
		}
		else if(ns==0 && ms==0)//both even
		{
			flag=1;
		}
		else
		{
			flag=1;
		}	
		if(flag==1)
			cout<<"Yes\n";
		else
			cout<<"No\n";
	}
	return 0;
}

