#include<stdio.h>
#include<stdlib.h>
int A[200005];
int Query[200005];
int compared(const void *a,const void *b)
{
	int num_a=*(int *)a;
	int num_b=*(int *)b;
	return num_b-num_a;
}
int main()
{
	int N,Q;
	scanf("%d%d",&N,&Q);
	int i;
	for(i=0;i<N;i++)	scanf("%d",&A[i]);
	qsort(A,N,sizeof(int),compared);
	//query time
	int l,r;
	for(i=1;i<=Q;i++)
	{
		scanf("%d%d",&l,&r);
		l--;r--;
		Query[l]++;
		Query[r+1]--;
	}
	for(i=1;i<N;i++)
	{
		Query[i]+=Query[i-1];
	}
	qsort(Query,N,sizeof(int),compared);
	long long int sum=0;
	for(i=0;i<N;i++)
	{
		sum+=A[i]*Query[i];
	}
	printf("%lld",sum);
	return 0;
}
