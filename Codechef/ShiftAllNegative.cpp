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
	cin>>N;
	vector<int> v;
	int cn=0,t;
	for(int i=0;i<N;i++)
	{
		cin>>t;
		v.push_back(t);
		if(t<0)
			cn++;
	}
	//if(cn==0)
		//no change
	//if(cn==N)
		//all negative,let it be
		
	//shift all -ve to left
	for(int i=0;i<N;i++)
	{
		if(v[i]<0)
		{
			//shift it till it reaches to left end
			while(i>0 && (v[i-1]>0 && v[i]<0))
			{
				//swap
				int t=v[i];
				v[i]=v[i-1];
				v[i-1]=t;
				i--;
			}
		}
	}
	for(int i=0;i<N;i++)
	{
		cout<<v[i]<<" ";
	}
	cout<<endl;
	return 0;
}

