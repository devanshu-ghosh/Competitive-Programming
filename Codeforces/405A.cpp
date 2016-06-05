#include<bits/stdc++.h>
using namespace std;
int main()
{
	int N,T;
	cin>>N;
	int *A = new int[N];
	for(int i=0;i<N;i++)
		cin>>A[i];
	sort(A,A+N);
	for(int i=0;i<N;i++)
		cout<<A[i]<<" ";
	cout<<endl;
}
