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
	string s;
	cin>>s;
	int l=s.length();
	//create a bool 2-d vector
	vector< vector<bool> > v;
	v.resize(l,vector<bool>(l));
	//l=1;
	int ans=1,i,j;
	for(i=0;i<l;i++)
		v[i][i]=1;
	//len 2
	for(i=0,j=1;j<l;j++,i++){
		if(s[i]==s[j])
		{
			v[i][j]=1;
			ans=2;
		}
		else
			v[i][j]=0;
	}
	//now from len=3
	int posi=-1,posj=-1;
	for(int k=2;k<l;k++)
	{
		for(i=0,j=k;j<l;j++,i++)
		{
			if(v[i+1][j-1]==1)
			{
				if(s[i]==s[j])
				{
					v[i][j]=1;
					ans=k+1;
					posi=i;
					posj=j;
				}
				else
					v[i][j]=0;
			}
			else
				v[i][j]=0;
		}
	}
	cout<<ans;
	for(i=posi;i<=posj;i++)
		cout<<s[i];
	return 0;
}

