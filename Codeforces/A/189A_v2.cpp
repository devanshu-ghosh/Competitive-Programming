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
	int n,a,b,c;
	cin>>n>>a>>b>>c;
	vector<int> v(n+1,0);
	for(int i=1;i<=n;i++){
		int aa=-1,bb=-1,cc=-1;
		if((i-a)>=0 && v[i-a]!=(-1))
			aa = v[i-a]+1;
		if((i-b)>=0 && v[i-b]!=(-1))
			bb = v[i-b]+1;
		if((i-c)>=0 && v[i-c]!=(-1))
			cc = v[i-c]+1;
		v[i]= __max(aa,__max(bb,cc));
	}
	cout<<v[n]<<endl;
	return 0;
}

