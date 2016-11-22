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
		int index;
		int cost;
		node(int i,int c)
		{
			index=i;
			cost=c;
		}
};
int countNodes;
int bfs(vector<int> C)
{
	queue<node> q;
	q.push(node(0,0));//means we are at oth index and cost is 0 no
	while(!q.empty())
	{
		node t = q.front();q.pop();
		if(t.index == C.size()-1)
		{
			//we have got the answer
			return t.cost;
		}
		int max_steps = C[t.index];
		for(int i=1;i<=max_steps;i++)
		{
			if((t.index+i)<C.size())
			{
				countNodes++;
				q.push(node(t.index+i,t.cost+1));
			}
			else
				break;
		}
	}
	return -1;
}
int main()
{
	ios_base::sync_with_stdio(0);
	vector<int> v;
	int N,temp;
	cin>>N;
	countNodes=0;
	while(N--)
	{
		cin>>temp;
		v.push_back(temp);
	}
	cout<<bfs(v)<<endl;
	cout<<countNodes<<endl;
	return 0;
}

