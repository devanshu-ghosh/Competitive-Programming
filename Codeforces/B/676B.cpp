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
class node
{
	public:
		double xs,need;
	node()
	{
		xs=0;
		need=0;
	}
};
int main()
{
	ios_base::sync_with_stdio(0);
	int n,t;
	cin>>n>>t;
	node A[11][11];
	if(t==0)
	{
		cout<<"0"<<endl;
		return 0;
	}
	else if(t==1)
	{
		cout<<"1"<<endl;
		return 0;
	}
	else
	{
		//our span starts from A[1][0]
		while(t--)
		{
			//step 1
			//add to initial node A[1][0]
			A[1][0].need+=1;
			if(A[1][0].need>1)
			{
				A[1][0].xs = A[1][0].need-1;
				A[1][0].need=1;
			}
			for(int i=2;i<=n;i++)
			{
				A[i][0].need+=(0.5)*(A[i-1][0].xs);
				if(A[i][0].need>1)
				{
					A[i][0].xs = A[i][0].need-1;
					A[i][0].need=1;
				}
				for(int j=1;j<=i;j++)
				{
					A[i][j].need+=(0.5)*(A[i-1][j].xs+A[i-1][j-1].xs);
					if(A[i][j].need>1)
					{
						A[i][j].xs = A[i][j].need-1;
						A[i][j].need=1;
					}
				}
			}	
		}
		int count=0;
		for(int i=1;i<=n;i++)
		{
			for(int j=0;j<i;j++)
			{
				if(A[i][j].need==1)
					count++;
			}
		}
		cout<<count<<endl;
	}
	
	return 0;
}

