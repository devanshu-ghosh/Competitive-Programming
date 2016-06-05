#include<stdio.h>
int A[100];
int SUM[100];
int N;
//indexing starts from 1
int result(int K)
{
	int i,j,m,s=0,flag=0;
	for(i=1;i<=N;i++)
	{
		for(j=i;j<=N;j++)
		{
			for(m=i;m<=j;m++) s=s+A[m];
			//sum from i to j
			//s=SUM[j]-SUM[i];
			if(s==K)
			{
				flag=1;break;
			} 
		}
		if(flag==1) break;
	}
	return flag;
}
int main()
{
	int T,K,N,i;
	SUM[0]=0;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d%d",&N,&K);
		for(i=1;i<=N;i++)
		{
			scanf("%d",&A[i]);
			if(A[i]&1) A[i]=0;
			else A[i]=1;
			//build cummulative sum array
			SUM[i]=SUM[i-1]+A[i];
		}
		/*for(i=1;i<=N;i++)
		{
			printf("%d",A[i]);
		}
		printf("\n");
		for(i=1;i<=N;i++)
		{
			printf("%d",SUM[i]);
		}*/
		if(result(K))
			printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}
