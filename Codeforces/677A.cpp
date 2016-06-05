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
	int n,h,t,one=0,two=0,temp;
	cin>>n>>h;
	while(n--)
	{
		cin>>temp;
		if(temp>h)
			two++;
		else 
			one++;
	}
	cout<<2*two+one<<endl;
	return 0;
}

