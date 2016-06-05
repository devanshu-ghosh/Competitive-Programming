#include<iostream>
#include<algorithm>
using namespace std;
class node
{
	public:int a,b,diff;
};
int cmpNode(node P , node Q)
{
	return (P.diff>=Q.diff);
}
int desc(int P,int Q)
{
	return (P>=Q);
}
int main()
{
	int T,N,K,M,i;
	cin>>T;
	while(T--)
	{
		cin>>N>>K>>M;
		node* A = new node[N];
		for(i=0;i<N;i++)
			cin>>A[i].a;
		for(i=0;i<N;i++)
		{
			cin>>A[i].b;
			A[i].diff=A[i].a-A[i].b;
		}	
		int* white = new int[K]; 
		int* black = new int[M]; 
		for(i=0;i<K;i++)
			cin>>white[i];
		for(i=0;i<M;i++)
			cin>>black[i];
		//GREEDY ALGO
		sort(A,A+N,cmpNode);
		sort(white,white+K,desc);
		sort(black,black+M,desc);
		int w=0,b=0,i=0;
		while((w<K) && (b<M))
		{
			
		}
		while(w<K)
		{
			if(white[w]>=A[i].diff)
			{
				w++;
			}
			else
			{
				A[i].a-=white[w];
				A[i].diff=A[i].a-A[i].b;
				i++;
				w++;
			}
		}
		while(b<M)
		{
			if(black[b]>=A[i].diff)
			{
				w++;
			}
			else
			{
				A[i].a-=white[w];
				A[i].diff=A[i].a-A[i].b;
				i++;
				w++;
			}
		}
	}
}
