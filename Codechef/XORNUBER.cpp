#include<stdio.h>
int main()
{
	int T;
	long long int N,M;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%lld",&N);
		M=N+1;
		if(N==1) printf("2\n");
		else if((M&&(!(M&(M-1))))) printf("%lld\n",N/2);
		else printf("-1\n");
	}
	return 0;
}
