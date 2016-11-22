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
	int T,type,L,R,N,M;
	vector<int> v(100005);
	for(int i=0;i<v.size();i++)
		v[i]=1;
	for(int i=2;i<v.size();i++)
	{
		//now for each i we fill out elements
		if(v[i]!=1)
			continue;
		int t=i;
		while(t<v.size())
		{
			if(v[t]==1)
				v[t]=i;
			t = t + i;
		}	
	}
	vector<int> in(100005);
	cin>>T;
	while(T--)
	{
		cin>>N>>M;
		//taken the input
		for(int i=0;i<N;i++)
			cin>>in[i];
		//I am making it 0 indexed
		while(M--)
		{
			cin>>type>>L>>R;
			L--;R--;//bcoz 0 indexing
			if(type == 1)
			{
				//RANGE QUERY
				int max=in[L];
				for(int i=L;i<=R;i++)
					max = (v[in[i]]>max)?v[in[i]]:max;
				cout<<max<<" ";
			}
			else
			{
				//RANGE UPDATE
				for(int i=L;i<=R;i++)
					in[i] = in[i]/v[in[i]];
			}
		}
		cout<<endl;
	}
	return 0;
}

