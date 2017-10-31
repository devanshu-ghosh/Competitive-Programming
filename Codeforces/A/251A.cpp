#include <bits/stdc++.h>
#define fr(a,b,c) for(int a = b, _ = c; a < _; a++)
using namespace std;
typedef long long i64;
const int mx = 1e5;
int u[mx];
i64 c2(i64 x){
	return (x*(x-1))/2;
}
int main(){
	int n, d;
	i64 ans;
	cin >> n >> d;
	fr(i,0,n){
		cin >> u[i];
	}
	int l = 0;
	ans = 0;
	fr(i,0,n){
		while(u[i]-u[l] > d){
			l++;
		}
		if(i-l+1 >= 3){
			ans += c2(i-l);
		}
	}
	cout << ans << endl;
}
