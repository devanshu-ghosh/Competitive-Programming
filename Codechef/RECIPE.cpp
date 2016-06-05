#include<stdio.h>
int gcd(int a,int b)
{
	if(b==0) return a;
	else return gcd(b,a%b);
}
int A[100];
int main()
{
	int T,N,i,t,g=0;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d",&N);
		for(i=0;i<N;i++)
		{
			scanf("%d",&A[i]);
			g=gcd(A[i],g);
		}
		for(i=0;i<N;i++)
		{
			printf("%d ",A[i]/g);
		}
		printf("\n");
		g=0;
	}
	return 0;
}
