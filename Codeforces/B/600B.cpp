#include<bits/stdc++.h>
using namespace std;
int main()
{
	int N,M;
	cin>>N>>M;
	int* A = new int[N];
	int* B = new int[M];
	for(int i=0;i<N;i++)
		cin>>A[i];
	for(int i=0;i<M;i++)
		cin>>B[i];
	sort(A,A+N);
	
	for(int i=0;i<M;i++)
	{
		int *p=upper_bound(A,A+N,B[i]);
		cout<<p-A<<" ";
	}
	cout<<endl;
}
