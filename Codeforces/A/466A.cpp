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
int n,m,a,b;
int mini(int a,int b,int c){
	int t = __min(a,b);
	return __min(t,c);
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin>>n>>m>>a>>b;
	vector<int> v(1005,0);
	for(int i=1;i<=n;i++){
		int t1=MOD,t2=MOD,t3=MOD; 
		t1 = v[i-1]+a;
		if((i-m)>=0)
			t2 = v[i-m]+b;
		t3 = (n/m+1)*b;
		v[i]=__min(t1,__min(t2,t3));
	}
	cout<<v[n]<<endl;
	return 0;
}

