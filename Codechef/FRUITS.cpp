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
	int T,N,M,K;
	cin>>T;
	while(T--)
	{
		cin>>N>>M>>K;
		int diff = abs(N-M);
		diff-=K;
		if(diff<=0)
			cout<<"0"<<endl;
		else
			cout<<diff<<endl;
	}
	return 0;
}

