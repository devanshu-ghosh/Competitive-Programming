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
	ll N,M,q,sum=0;
	cin>>N>>M;
	if(N==1)
	{
		while(M--)
		{
			cin>>q;
			if(q!=3)
				cout<<"0\n";
			else
				cout<<"1\n";
		}
	}
	ll l=N+2,h=3*N,mid=2*N+1;
	while(M--)
	{
		cin>>q;
		if(q<l || q>h)
		{
			cout<<"0\n";
		}
		else
		{
			if(q==mid)
				cout<<N<<endl;
			else if(q>mid)
			{
				int pos = q-mid;
				cout<<N-pos<<endl;
			}
			else
			{
				int pos = mid-q;
				cout<<N-pos<<endl;
			}
		}
	}
	return 0;
}

