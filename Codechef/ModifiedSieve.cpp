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
	int N;
	N=100001;
	//cin>>N;
	vector<int> v(N);
	//initialize
	for(int i=0;i<v.size();i++)
		v[i]=0;
	//do the sieve
	for(int i=2;i<N;i++)
	{
		//now for each i we fill out elements
		if(v[i]!=0)
			continue;
		for(int j=1;i*j<v.size();j++)
		{
			if(v[i*j]==0)
				v[i*j]=i;
		}
			
	}
	//for(int i=0;i<v.size();i++)
	//	cout<<i<<" : "<<v[i]<<endl;
	return 0;
}

