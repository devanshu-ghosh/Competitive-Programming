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
		int x,y;
		node(int xx,int yy)
		{
			x=xx;
			y=yy;
		}
};
int check(node t)
{
	if(t.x == -1 && t.y == -1)
		return 1;
	return 0;
}
int xx[]={-1,0,1,0};
int yy[]={0,1,0,-1};
int bfs(vector< vector<int> > v)
{
	int R=v.size();
	int C=v[0].size();
	int count=0;
	queue<node> q;
	//ipnut all rotten stuf
	for(int i=0;i<v.size();i++)
		for(int j=0;j<v[i].size();j++)
			if(v[i][j]==2)
				q.push(node(i,j));
	//push deleimeter
	q.push(node(-1,-1));
	while(!q.empty())
	{
		while(!check(q.front()))
		{
			node t = q.front();
			//rot all the neighbours
			for(int d=0;d<4;d++)
			{
				int nx,ny;
				nx = t.x + xx[d];
				ny = t.y + yy[d];
				//check if index is valid or not
				if(nx<0 || nx>=R || ny<0 || ny>=C )
					continue;
				else
				{
					if(v[nx][ny]==1)
					{
						v[nx][ny]=2;
						q.push(node(nx,ny));
					}
				}
			}
			q.pop();
		}
		q.pop();
		if(!q.empty())
		{
			q.push(node(-1,-1));
			count++;
		}
	}
	//no check whether all the values are 2 or not
	int flag=1;
	for(int i=0;i<R;i++)
	{
		for(int j=0;j<C;j++)
		{
			if(v[i][j]==1)
			{
				flag=0;
				break;
			}
		}
		if(flag==0)
			break;
	}
	if(flag==1)
		return count;
	return -1;
}
int main()
{
	ios_base::sync_with_stdio(0);
	int N,M;
	cin>>N>>M;
	vector< vector<int> > v;
	v.resize(N , vector<int>(M));
	//input
	for(int i=0;i<N;i++)
	{
		for(int j=0;j<M;j++)
		{
			cin>>v[i][j];
		}
	}
	cout<<bfs(v);
	return 0;
}

