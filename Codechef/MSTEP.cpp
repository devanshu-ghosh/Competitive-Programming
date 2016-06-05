#include<stdio.h>
typedef struct node
{
	int x,y;
}node;
node A[250005];
int abso(int x)
{
	return (x>0)?x:-1*x;
}
int main()
{
	int T,N,temp;
	long long int step=0;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d",&N);
		int i,j;
		for(i=1;i<=N;i++)
		{
			for(j=1;j<=N;j++)
			{
				scanf("%d",&temp);
				A[temp].x=i;
				A[temp].y=j;
			}
		}
		for(i=2;i<=(N*N);i++)
		{
			step+=abso(A[i].x-A[i-1].x)+abso(A[i].y-A[i-1].y);
		}
		printf("%lld\n",step);
		step=0;
	}
}
