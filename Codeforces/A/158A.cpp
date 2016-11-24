#include<iostream>
using namespace std;
int A[60];
int main()
{
	int N,K,i;
	cin>>N>>K;
	for(i=1;i<=N;i++)
	{
		cin>>A[i];
	}
	int v=A[K];
	int c=0;
	for(i=1;i<=N;i++)
	{
		if((A[i]>=v) && (A[i]!=0))
			c++;
	}
	cout<<c<<endl;
}
