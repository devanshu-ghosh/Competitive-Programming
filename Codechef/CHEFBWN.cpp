#include<stdio.h>
long int A[100005];
long int Query[100005];
int main()
{
	long int T,N,M,i,l,r;
	scanf("%ld",&T);
	while(T--)
	{
		scanf("%ld %ld",&N,&M);
		for(i=0;i<N;i++) scanf("%ld",&A[i]);
		//now queries
		for(i=0;i<M;i++)
		{
			scanf("%ld %ld",&l,&r);
			//bringing it to 0 to n-1
			l--;r--;
			Query[l]++;
			Query[r+1]--;
		}
		//applying the query
		for(i=1;i<N;i++)
		{
			Query[i]+=Query[i-1];
		}
		long long int sum=0;
		for(i=0;i<N;i++) 
		{
			sum=A[i]+Query[i];
			printf("%lld ",sum);
		}
		printf("\n");
	}
}
