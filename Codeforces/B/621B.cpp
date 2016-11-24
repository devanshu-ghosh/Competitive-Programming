#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
class node
{
	public:int x,y;
};
class node2
{
	public:
		vector<int> v;
};
int cmp(node P,node Q)
{
	return (P.x<Q.x);
}
int absl(int x)
{
	return (x>0)?x:(-1*x);
}
int main()
{
	int N,x,y;
	cin>>N;
	node2* P = new node2[1001];
	
	for(int i=0;i<N;i++)
	{
		cin>>x>>y;
		P[x].v.push_back(y);
	}
		
//	long long int count=0;
//	sort(A,A+N,cmp);
//	int a,b;
//	for(int i=0;i<N;i++)
//	{
//		for(int j=i+1;j<N;j++)
//		{
//			a=absl(A[i].x-A[j].x);
//			b=absl(A[i].y-A[j].y);
//			if(a==0 || b==0) continue;
//			else if(a==b)
//				count++;
//		}
//	}
//	cout<<count<<endl;
}
