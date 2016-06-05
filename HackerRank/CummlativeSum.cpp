#include<iostream>
using namespace std;
int main()
{
	int N;
	cin>>N;
	int* A = new int[N];
	for(int i=0;i<N;i++)
	{
		A[i]=i;
	}
	//Cummulative Sum
	for(int i=1;i<N;i++)
		A[i]+=A[i-1];
	int Q;
	Q = 5;
	int l,r;
	while(Q--)
	{
		cin>>l>>r;
		int ans = (l>0)? (A[r]-A[l-1]) : A[r];
		cout<<ans<<endl;
	}
}
