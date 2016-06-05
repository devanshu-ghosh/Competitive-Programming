#include<iostream>
#include<vector>
using namespace std;
vector< vector<int> > AL;
int visited[100];
void dfs(int start)
{
	visited[start]=1;
	cout<<start<<endl;
	int i=0;
	while(i<AL[start].size())
	{
		int v = AL[start][i];
		if(!visited[v])
			dfs(v);
		i++;
	}
}
int main()
{
	int no_of_nodes,start,end,edge,root;
	cout<<"Enter the No of Nodes : ";
	cin>>no_of_nodes;
	edge=no_of_nodes-1;
	//cout<<"Enter the No of Edges : ";
	//cin>>edge;
	AL.resize(no_of_nodes+1 , vector<int>());
	//input edges list
	//we assume that the first input is the root
	while(edge--)
	{
		cin>>start>>end;
		AL[start].push_back(end);
		AL[end].push_back(start);
	}
	dfs(3);
}
