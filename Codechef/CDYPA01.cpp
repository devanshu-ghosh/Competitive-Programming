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
	ll N;
	cin>>T;
	while(T--)
	{
		cin>>N;
		ll x = ll(sqrt(N));
		if((x*x)==N)
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}
	return 0;
}

