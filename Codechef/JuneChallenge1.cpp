#include<stdio.h>
int main()
{
	int t,temp;//t test cases
	scanf("%d",&t);
	while(t--)
	{
		int c=0,i,q;
		long long int d=0;
		int N;
		scanf("%d",&N);
		//array input
		for(i=0;i<N;i++)
		{
			scanf("%d",&temp);
			q=temp-c;
			if(q>0)
			{
				d=d+q;
			}
			c=temp;
		}
		printf("%lld\n",d);	
	}
	return 0;
}
