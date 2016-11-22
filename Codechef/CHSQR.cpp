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
	int T,K;
	cin>>T;
	while(T--){
		cin>>K;
		list<int> l;
		for(int i=K/2+2;i<=K;i++)
			l.push_back(i);
		for(int i=1;i<=K/2+1;i++)
			l.push_back(i);
		int t=K;
		list<int>::iterator itr;
		while(t--){
			for(itr=l.begin();itr!=l.end();itr++)
				cout<<*itr<<" ";
			//chnage stuff
			int u = l.front();
			l.pop_front();
			l.push_back(u);
			cout<<endl;
		}
	}
	return 0;
}

