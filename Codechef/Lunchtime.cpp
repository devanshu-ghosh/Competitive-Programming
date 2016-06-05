#include<stdio.h>
#include<stdlib.h>
//1 denots cops and 0 denotes no cops
int A[101];
int main()
{
	int T,c=0;
	scanf("%d",&T);
	while(T--)
	{
		int M,x,y;
		scanf("%d%d%d",&M,&x,&y);
		int i,temp;
		//save the cop houses for easy finding
		int *p;
		p=(int *)malloc(sizeof(int)*M);
		for(i=0;i<M;i++)
		{
			scanf("%d",&temp);
			A[temp]=1;//cops houses
			p[i]=temp;//saving cops houses
		}
		//now the algo
		for(i=0;i<M;i++)
		{
			int z,j;
			z=p[i]+x*y;
			for(j=p[i];j<=z && j<=100;j++) A[j]=1;
			z=p[i]-x*y;
			if(z<=0) z=1;
			for(j=p[i];j>=z;j--) A[j]=1;
		}
		//count the number of houses
		for(i=1;i<101;i++)
		{
			if(A[i]==0) c++;
		}
		printf("%d\n",c);
		c=0;
		//initialize the array
		for(i=0;i<101;i++) A[i]=0;
	}
	return 0;
}
