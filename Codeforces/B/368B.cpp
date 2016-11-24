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
#include <unordered_set>
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
	int N,M;
	cin>>N>>M;
	vector<int> v(N+1),dp(N+1,0);
	for(int i=1;i<=N;i++)
		cin>>v[i];
	unordered_set<int> m;
	dp[N]=1;
	m.insert(v[N]);
	for(int i=N-1;i>=1;i--){
		int t = v[i];
		if( m.find(t) == m.end() ){
			dp[i]=dp[i+1]+1;
			m.insert(t);
		}
		else{
			dp[i]=dp[i+1];
		}
	}
	int temp;
	while(M--){
		cin>>temp;
		cout<<dp[temp]<<endl;
	}
	return 0;
}

