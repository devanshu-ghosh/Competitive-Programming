#include<stdio.h>
#include<limits.h>
#define INF ULONG_MAX
int main()
{
	int T;
	scanf("%d",&T);
	long long int N,min=INF,temp,i;
	long long int ans=0;
	while(T--)
	{
		scanf("%lld",&N);
		for(i=0;i<N;i++)
		{
			scanf("%lld",&temp);
			if(temp<min)
				min=temp;
		}
		ans=min*(N-1);
		printf("%lld\n",ans);
		ans=0;
		min=INF;
	}
	return 0;
}
