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
	int T,N,temp;
	cin>>T;
	set<int> s;
	while(T--)
	{
		cin>>N;
		while(N--)
		{
			cin>>temp;
			s.insert(temp);
		}
		cout<<s.size()<<endl;
		s.clear();
	}
	return 0;
}

