//grand party
#include<stdio.h>
int main()
{
	int T,N,d,i,s=0,temp;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d%d",&N,&d);
		for(i=0;i<N;i++)
		{
			scanf("%d",&temp);
			s=s+temp;
		}
		int value=s+(N-1)*10;
		if(value>d) printf("-1\n");
		else
		{
			int y=(d-value)/5;
			printf("%d\n",2*(N-1)+y);
		}
		s=0;
	}
	return 0;
}
