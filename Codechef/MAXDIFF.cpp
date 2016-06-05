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
	ll T,N,W,K;
	cin>>T;
	ll A[105];
	while(T--)
	{
		cin>>N>>K;
		ll sum=0,sum2=0;
		for(int i=0;i<N;i++)
		{
			cin>>A[i];
			sum+=A[i];
		}
		sort(A,A+N);
		for(int i=0;i<K;i++)
			sum2+=A[i];
		sum-=sum2;
		cout<<abs(sum-sum2)<<endl;
		
	}
	return 0;
}

