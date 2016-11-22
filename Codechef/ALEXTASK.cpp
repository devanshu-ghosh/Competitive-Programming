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
	int T,N,t;
	cin>>T;
	while(T--){
		cin>>N;
		vector<int> v(N,0);
		for(int i=0;i<N;i++){
			cin>>v[i];
		}
		sort(v.begin(),v.end());
		if(v[0]==1)
			cout<<v[1]<<endl;
		else{
			cout<<(v[0]*v[1])/__gcd(v[0],v[1])<<endl;
		}
	}
	return 0;
}

