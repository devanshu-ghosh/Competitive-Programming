#include<iostream>
using namespace std;
#define INF 0
#define N 100
struct node
{
	int ro,l,r;
};
node A[N];
void inorder(int index)
{
	if(A[index].ro!=INF)
	{
		inorder(A[index].l);
		cout<<A[index].ro<<" ";
		inorder(A[index].r);
	}
}
void preorder(int index)
{
	if(A[index].ro!=INF)
	{
		cout<<A[index].ro<<" ";
		preorder(A[index].l);
		preorder(A[index].r);
	}
}
void initialised()
{
	int i;
	for(i=0;i<N;i++)
	{
		A[i].ro=INF;A[i].r=INF;A[i].l=INF;
	} 
}
void input()
{
	cout<<"Enter No of edges : ";
	int e;
	int a,b,c;
	cin>>e;
	while(e--)
	{
		cin>>a>>b>>c;
		A[a].ro=a;
		A[b].ro=b;
		if(c==0)
			A[a].l=b;
		else
			A[a].r=b;
	}
}
int main()
{
	initialised();
	input();
	inorder(1);cout<<endl;
	preorder(1);
	
}
