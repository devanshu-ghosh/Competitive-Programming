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
	priority_queue<ll, vector<ll>, greater<ll> > p;
	int N,temp;
	cin>>N;
	while(N--)
	{
		cin>>temp;
		p.push(temp);
	}
	ll cost=0,t=0;
	while(p.size()!=1)
	{
		t+= p.top();p.pop();
		t+= p.top();p.pop();
		p.push(t);
		cost+=t;
		t=0;
	}
	cout<<cost<<endl;
	return 0;
}

