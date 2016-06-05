#include<stdio.h>
int main()
{
	long long int T,N,pos=0,i;
	long long int W,max=0;
	scanf("%lld",&T);
	while(T--)
	{
		scanf("%lld",&N);
		for(i=0;i<N;i++)
		{
			scanf("%lld",&W);
			W+=i;
			if(W>=max)
				max=W;
		}
		printf("%lld\n",max);
		max=0;
	}
	return 0;
}
