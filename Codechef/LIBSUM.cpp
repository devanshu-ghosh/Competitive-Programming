//subset sum problem
#include<iostream>
using namespace std;
long int A[105];
int isSubsetSum(long int set[], int n, int sum)
{
   if (sum == 0)
     return 1;
   if (n == 0 && sum != 0)
     return 0;
   if (set[n-1] > sum)
     return isSubsetSum(set, n-1, sum);
   return isSubsetSum(set, n-1, sum) || isSubsetSum(set, n-1, sum-set[n-1]);
}
int main()
{
	int T,N,K,i;
	cin>>T;
	while(T--)
	{
		cin>>N>>K;
		for(i=0;i<N;i++) cin>>A[i];
		if(isSubsetSum(A,N,K)) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}
