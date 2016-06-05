#include<stdio.h>
#include<math.h>
int main()
{
	int T;
	long long int B;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%lld",&B);
		B=(B/2);
		long long int ans=B*(B-1)/2;
		printf("%lld\n",ans);
	}
	return 0;
}
