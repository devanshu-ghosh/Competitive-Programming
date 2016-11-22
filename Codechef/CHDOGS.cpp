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
#include <iomanip>
#define MOD 1000000007
typedef long long int ll;
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	int T;
	double s,v;
	cin>>T;
	while(T--)
	{
		std::cout << std::fixed;
    	std::cout << std::setprecision(8);
		cin>>s>>v;
		double a = (2.0*s)/(3.0*v);
		cout<<a<<endl;
	}
	return 0;
}

