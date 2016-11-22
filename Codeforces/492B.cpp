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
int check(double m,vector<int> v){
	double l=0,r,ll,rr;
	for(int i=0;i<v.size();i++){
		ll = v[i]-d;
		rr = v[i]+d;
		
	}
}
int main()
{
	ios_base::sync_with_stdio(0);
	int N,L;
	vector<int> v(N);
	for(int i=0;i<N;i++)
		cin>>v[i];
	double l=0,h=L;
	while((h-l)>0.0001){
		double m = (l+h)/2;
		if(check(m,v)==1)
			l=m;
		else
			h=m;
	}
	cout<<(h+l)/2<<endl;
	return 0;
}

