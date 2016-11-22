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
	int A,B;
	cin>>A>>B;
	int d = A-B;
	if(d<10)
	{
		cout<<9-d<<endl;
		return 1;
	}
	int l = 9 - d%10;
	int dd = d/10;
	cout<<dd*10+l<<endl;
	return 0;
}

