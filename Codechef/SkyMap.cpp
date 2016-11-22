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
vector< vector<int> > v;
vector< vector<int> > visited;
class node
{
	public:
		int x,y,len;
		node(int xx,int yy,int l)
		{
			x=xx;
			y=yy;
			len=l;
		}
};
int xd[4]={-1,0,1,0};
int yd[4]={0,1,0,-1};
int bfs(int i,int j,int M,int N)
{
	cout<<"bfs0"<<endl;
	
	int l=0;
	queue<node> q;
	q.push(node(i,j,1));
	while(!q.empty())
	{
		cout<<"bfs2"<<endl;
		node t = q.front();
		visited[t.x][t.y];
		//now we have 4 directions
		for(int d=0;d<4;d++)
		{
			int xx = t.x + xd[d];
			int yy = t.y + yd[d];
			cout<<xx<<" "<<yy<<endl;
			//test if they are valid
			if(xx<0 || yy<0 || xx>=M || yy>=N)
			{
				//do nothing
				cout<<"bad"<<endl;
			}
			else
			{
				cout<<"good upper"<<endl;
				if(!visited[xx][yy])
				{
					cout<<"good"<<endl;
					q.push(node(xx,yy,t.len+1));
					cout<<xx<<" "<<yy<<endl;
					if(l<(t.len+1))
						l = t.len+1;
				}	
			}
		}
		q.pop();
	}
	cout<<"bfs1"<<endl;
	return l;
}
int main()
{
	ios_base::sync_with_stdio(0);
	//BFS , inut array and visitd array
	int N,M,T,temp,i,j;
	cin>>T;
	vector< vector<int> > v;
	vector< vector<int> > visited;
	while(T--)
	{
		v.clear();
		visited.clear();
		cin>>M>>N;
		v.resize(M,vector<int>(N));
		visited.resize(M,vector<int>(N));
		for(i=0;i<M;i++)
		{
			for(j=0;j<N;j++)
			{
				cin>>temp;
				v[i][j]=temp;
				visited[i][j]=0;
			}
		}
		cout<<"yo1"<<endl;
		for(i=0;i<M;i++)
		{
			for(j=0;j<N;j++)
			{
				cout<<visited[i][j]<<" ";
			}
			cout<<endl;
		}
		int count=0,maxLen=0;
		for(i=0;i<M;i++)
		{
			for(j=0;j<N;j++)
			{
				if(v[i][j]==1 && visited[i][j]==0)
				{
					cout<<"yo1"<<endl;
					int len = bfs(i,j,M,N);
					if(len > maxLen)
						maxLen = len;
					count++;
				}
			}
		}
		cout<<count<<" "<<maxLen<<endl;
	}
	return 0;
}

