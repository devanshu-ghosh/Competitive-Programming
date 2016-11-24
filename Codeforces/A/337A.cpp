#include<bits/stdc++.h>
using namespace std;
int main()
{
	int N,M,i;
	cin>>N>>M;
	int *A = new int[M];
	for(i=0;i<M;i++)
		cin>>A[i];
	sort(A,A+M);
	int d=0,min=100000;
	for(i=N-1;i<M;i++)
	{
		d=A[i]-A[i-(N-1)];
		if(d<=min)
			min=d;
	}
	cout<<min<<endl;
	
}
