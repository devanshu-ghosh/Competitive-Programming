#include<iostream>
//AC . without memoization
using namespace std;
int A[30];
//N is index and S is sum
int isSubsetSum(int N,int S)
{
	if(S==0) return 1;
	if(N<0 || S<0) return 0;
	else
	{
		return isSubsetSum(N-1,S-A[N])||isSubsetSum(N-1,S);
	}
}
int main()
{
	int T,N,M,i;
	cin>>T;
	while(T--)
	{
		cin>>N>>M;
		for(i=0;i<N;i++)
			cin>>A[i];
		if(isSubsetSum(N-1,M))
			cout<<"Yes\n";
		else cout<<"No\n";
	}
	return 0;
}
