#include<stdio.h>
#include<stdlib.h>
int compared(const void *a,const void *b)
{
	int num_a=*(int *)a;
	int num_b=*(int *)b;
	return num_b-num_a;
}
int A[100005];
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		int N,D,i;
		scanf("%d%d",&N,&D);
		for(i=0;i<N;i++)
			scanf("%d",&A[i]);
		//sort the array
		long long int sum=0;
		qsort(A,N,sizeof(int),compared);
		for(i=0;i<(N-1);i++)
		{
			if(A[i]-A[i+1]<D)
			{
				sum+=A[i]+A[i+1];
				i++;
			}
		}
		printf("%lld\n",sum);
	}
	return 0;
}
		/*for(i=0;i<N;i++)
		{
			if(HASH[i]==1) continue;
			for(j=i+1;j<N;j++)
			{
				if(HASH[j]==1) continue;
				x=A[i]-A[j];
				if(x>=D) break;
				else
				{
					HASH[i]=1;
					HASH[j]=1;
					s=A[i]+A[j];
					if(s>s_prev) s_prev=s;
					sum=sum+s_prev;
					//printf("%d ",s_prev);
				}
			}
		}
		printf("%lld\n",sum);
		sum=0;s_prev=0;	
		for(i=0;i<=N;i++) HASH[i]=0;*/
