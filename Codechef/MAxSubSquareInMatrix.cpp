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
int mini(int x,int y,int z)
{
	int t = (x>y)?x:y;
	return (t>z)?t:z;
}
int main()
{
	ios_base::sync_with_stdio(0);
	int N,M;
	cin>>N>>M;
	vector< vector<bool> > v;
	v.resize(N,vector<bool>(M));
	//input
	//cases
	//if all elements are 0
	//if all are 1
	//if we have even 1 1 , our ans is 1
	//this takes care of 1-D inputs
	int t;
	for(int i=0;i<N;i++)
	{
		for(int j=0;j<M;j++)
		{
			cin>>t;
			v[i][j]=t;
		}
	}
	//create the other matrix
	vector< vector<int> > s;
	s.resize(N,vector<int>(M));
	//fill the 0th row
	for(int i=0;i<M;i++)
		s[0][i] = v[0][i];
	//fill the oth column
	for(int i=0;i<N;i++)
		s[i][0] = v[i][0];
	for(int i=1;i<N;i++)
	{
		for(int j=1;j<M;j++)
		{
			if(v[i][j]==1)
				s[i][j] = mini(s[i-1][j-1],s[i-1][j],s[i][j-1]) + 1;
			else
				s[i][j]=0;
		}
	}
	//find the max
	int max = INT_MIN;
	for(int i=0;i<N;i++)
	{
		for(int j=0;j<M;j++)
		{
			if(s[i][j]>max)
				max=s[i][j];
		}
	}
	cout<<max<<endl;
	return 0;
}

