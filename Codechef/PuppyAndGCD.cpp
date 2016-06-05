#include<stdio.h>
int gcd(int a,int b)
{
	if(b==0) return a;
	else return gcd(b,a%b);
}
int main()
{
	int T;
	int N,D;
	long int count=0;
	int i,j;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d %d",&N,&D);
		if(D>N) count=0;
		else if(D==N) count=1;
		else
		{
			for(j=D;j<=N;j++)
			{
				for(i=D;i<=j;i++)
				{
					if(gcd(i,j)==D) //printf("%d %d %d\n",i,j,gcd(i,j));
					count++;
				}
			}
		}
		printf("%ld\n",count);
		count=0;
	}
}
