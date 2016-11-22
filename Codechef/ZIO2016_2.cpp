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
int N;
int state(vector< vector<int> > v,int col,int row,int count,string ans)
{
	if(col==N)
	{
		if(count%2==0){
			cout<<count<<endl;
			cout<<ans<<endl;
			return 1;
		}	
		return 0;
	}
	else
	{
		int sum=0;
		for(int k=1;k<=3;k++)
		{
			if(k!=row){
				if(v[k][col+1]==1)
					sum+= state(v,col+1,k,count+1,ans+to_string(k));
				else
					sum+= state(v,col+1,k,count,ans+to_string(k));
			}
		}
		return sum;
	}
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin>>N;
	vector< vector<int> > v;
	v.resize(4,vector<int>(N+1));
	//input
	int u=0;
	for(int i=1;i<=3;i++)
	{
		for(int j=1;j<=N;j++)
		{
			char c;
			cin>>c;
			switch(c)
			{
				case 'R':u=1;break;
				case 'B':u=2;break;
				case 'G':u=3;break;
			}
			v[i][j]=u;
		}
	}
	/*for(int i=1;i<=N;i++)
	{
		for(int j=1;j<=3;j++)
		{
			cout<<v[i][j]<<" ";
		}
		cout<<endl;
	}*/
	//lets put them into the recursion
	int sum=0;
	string ans="";
	for(int row=1;row<=3;row++)
	{
		if(v[row][1]==1)
			sum+= state(v,1,row,1,ans+to_string(row));
		else
			sum+= state(v,1,row,0,ans+to_string(row));
	}
	cout<<sum<<endl;
	return 0;
}

