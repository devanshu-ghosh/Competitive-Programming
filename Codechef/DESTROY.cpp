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
	ll count=0;
	set<int> s;
	set<int>::iterator it;
	cin>>T;
	while(T--)
	{
		s.clear();
		count=0;
		cin>>N;
		cin>>temp;
		s.insert(temp);
		N--;
		while(N--)
		{
			cin>>temp;
			it=s.find(temp);
			if(it!=s.end())
			{
				count++;
			}
			else
				s.insert(temp);
		}
		count+=((s.size()+1)/2);
		cout<<count<<endl;
	}
	return 0;
}

