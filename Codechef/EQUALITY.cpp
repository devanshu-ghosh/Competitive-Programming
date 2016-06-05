#include<stdio.h>
int main()
{
	int T,N,i;
	long long int sum_a=0;
	long long int A[60000];
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d",&N);
		for(i=0;i<N;i++)
		{
			scanf("%lld",&A[i]);
			sum_a+=A[i];
		}
		for(i=0;i<N;i++)
		{
			long long int x=(sum_a-(N-1)*A[i])/(N-1);
			printf("%lld ",x);
		}
		sum_a=0;
		printf("\n");
	}
}
