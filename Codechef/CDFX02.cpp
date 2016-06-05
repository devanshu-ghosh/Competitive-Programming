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
#include<limits>
#include <iomanip>
#define MOD 1000000007
typedef long long int ll;
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	int T,p,q,r,s;
	cin>>T;
	while(T--)
	{
		cin>>p>>q>>r>>s;
		int num = p*s;
		int den = q*r + p*s -p*r;
		double ans = (num*1.0)/den;
		cout.setf(ios::fixed);
		cout<<setprecision(5)<<ans<< endl;
	}
	return 0;
}

