#include<bits/stdc++.h>
using namespace std;
class node
{
	public:
		int x,y;
};
int cmp(node q,node p)
{
	return q.x<p.x;
}
int main()
{
	int S,N;
	cin>>S>>N;
	node* A = new node[N];
	for(int i=0;i<N;i++)
		cin>>A[i].x>>A[i].y;
	sort(A,A+N,cmp);
	int flag=1;
	for(int i=0;i<N;i++)
	{
		if(S>A[i].x)
			S+=A[i].y;
		else
		{
			flag=0;
			break;
		}
	}
	if(flag==0)
		cout<<"NO\n";
	else
		cout<<"YES\n";
}
