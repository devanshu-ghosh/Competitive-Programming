#include<stdio.h>
#include<stdlib.h>
int A[100];
int compared(const void *a,const void *b)
{
	int num_a=*(int *)a;
	int num_b=*(int *)b;
	return num_a-num_b;//ascending
}
int main()
{
	int T,i,j,k;
	int *p;
	scanf("%d",&T);
	while(T--)
	{
		int N;
		scanf("%d",&N);
		p=(int *)malloc(N*sizeof(int));
		for(i=0;i<N;i++)
		{
			scanf("%d",&A[i]);
			p[i]=A[i]*A[i];
		}
		qsort(p,N,sizeof(int),compared);
		//for(i=0;i<N;i++) printf("%d ",p[i]);
		for(i=N-1;i>1;i--)//sets c
		{
			//perform meet in the middle on i=0 and j=i-1
			k=0;j=i-1;
			while(k<j)
			{
				int s=p[k]+p[j];
				if(s==p[i]) 
				{
					printf("%d + %d = %d\n",p[k],p[j],p[i]);
					k++;j--;
				}
				else if(s>p[i]) j--;
				else k++;
			}
		}
		free(p);
	}
	return 0;
}
