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
		int N;
		int step;
		node(int x,int y)
		{
			N=x;
			step=y;
		}
};
int bfs(int N,int M)
{
	queue<node> q;
	q.push(node(N,0));
	while(!q.empty())
	{
		//pop the value
		node t = q.front();q.pop();
		if(t.N == M)
			return t.step;
		else
		{
			//enqueue the 2 childs
			if(t.N < (2*M))//a very big optimization has been done here
				q.push(node(2*t.N,t.step+1));
			q.push(node(t.N-1,t.step+1));
		}
	}
}
int main()
{
	ios_base::sync_with_stdio(0);
	int N,M;
	cin>>N>>M;
	cout<<bfs(N,M);
	return 0;
}

