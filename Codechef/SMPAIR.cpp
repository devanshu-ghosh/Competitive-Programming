#include<stdio.h>
#include<stdlib.h>
long int A[100005];
int compared(const void *a,const void *b)
{
	int num_a=*(int *)a;
	int num_b=*(int *)b;
	return num_a-num_b;
}
int main()
{
	int T,i,j,N,temp,pos;
	long long int min,min2;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d",&N);
		for(i=0;i<N;i++) scanf("%ld",&A[i]);
		qsort(A,N,sizeof(long int),compared);
		long long int ans=(long long int)(A[0]+A[1]);
		printf("%lld\n",ans);
	}
}
