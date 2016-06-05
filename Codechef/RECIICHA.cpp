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
#define MOD 1000003
typedef long long int ll;
using namespace std;
ll T[MOD];
int main()
{
	ios_base::sync_with_stdio(0);
	//preprocess
	T[0]=1;
	for(int i=1;i<MOD;i++)
	{
		T[i] = (i*T[i-1])%MOD;
	}
	ll Test,N,X;
	cin>>Test;
	while(Test--)
	{
		cin>>N>>X;
		if(N>=MOD)
			cout<<"0"<<endl;
		else
		{
			X = X%MOD;
			ll temp = T[N] * X * 1LL;
			temp = temp%MOD;
			cout<<temp<<endl;
		}
		
	}
	return 0;
}

