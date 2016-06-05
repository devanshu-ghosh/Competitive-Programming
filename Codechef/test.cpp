#include<stdio.h>
#include<limits.h>
#include<stdlib.h>
typedef struct point
{
	int max_x;
	int index;
}point;
int comparedA(const void *a,const void *b)
{
	point *num_a=(point *)a;point *num_b=(point *)b;//first type cast
	int numa=num_a->max_x;int numb=num_b->max_x;//then apply
	return numb-numa;
}
point p[100005];
int main()
{
	int T,tempX,tempY,max;
	scanf("%d",&T);
	//I should save the input
	while(T--)
	{
		int N,M;
		scanf("%d",&N);
		int i;
		for(i=0;i<N;i++)//N is no. of Polygons
		{
			scanf("%d",&M);//M is no. of vertices
			int j;
			max=LONG_MIN;
			for(j=0;j<M;j++)
			{
				scanf("%d%d",&tempX,&tempY);
				if(tempX>max)
				{
					max=tempX;
				}
			}
			p[i].max_x=max;
			p[i].index=i;
		}
		qsort(&p[0],N,sizeof(point),&comparedA);
		//now we act on the input
		for(i=0;i<N;i++)
		{
			int t=p[i].index;
			p[t].max_x=N-i-1;
		}
		for(i=0;i<N;i++)
		{
			printf("%d ",p[i].max_x);
		}
	}
	return 0;
}
