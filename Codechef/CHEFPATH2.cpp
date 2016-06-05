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
	ll T,N,M;
	cin>>T;
	while(T--)
	{
		int flag=0;
		cin>>N>>M;
		if(N==1 || M==1)//anyoe is one then ans is no
		{
			if((N*M)==2)
				flag=1;
			else
				flag=1;
		}
		else if(N&1 && M&1)//both odd
		{
			flag=0;
		}
		else
			flag=1;
			
		if(flag==1)
			cout<<"Yes\n";
		else
			cout<<"No\n";
	}
	return 0;
}
