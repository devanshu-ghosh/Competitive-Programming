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
ll f(ll A,ll B){
	if(A==B)
		return 1;
	if(A==1 || B==1)
		return A*B;
	if(A>B){
		ll t=A/B;
		if(A%B==0)
			return t;
		else
			return t+f(A%B,B);
	}
	if(B>A){
		ll t=B/A;
		if(B%A==0)
			return t;
		else
			return t+f(A,B%A);
	}
}
int main()
{
	ios_base::sync_with_stdio(0);
	ll A,B;
	cin>>A>>B;
	if(A==1 || B==1)
		cout<<A*B<<endl;
	else
	cout<<f(A,B)<<endl;
	return 0;
}

