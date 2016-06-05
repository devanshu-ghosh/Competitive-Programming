#include<stdio.h>
int main()
{
	int T;
	int N,K;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d%d",&N,&K);
		int i,max=0;
		for(i=2;i<=K;i++)
		{
			int a=N/i;
			int gets=N-i*a;
			if(gets>max)
			{
				max=gets;
			} 
		}
		printf("%d\n",max);
	}
	return 0;
}
