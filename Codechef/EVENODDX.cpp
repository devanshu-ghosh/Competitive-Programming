#include<stdio.h>
int A[100000000];
void exchange(int i,int j,int a[])
{
	int t=a[i];
	a[i]=a[j];
	a[j]=t;
}
int partitionA(int start,int end)
{
	float pivot=1;//a[end];//pivot value chosen as end
	//it is actually randomized to escape n2 case
	int pIndex=start,i;
	for(i=start;i<(end);i++)
	{
		if(A[i]&1)
		{
			exchange(i,pIndex,A);
			pIndex++;
		}
	}
	exchange(pIndex,end,A);
	return pIndex;
}
int main()
{
	int T,temp;
	while(T--)
	{
		long int N,odd=0,even=0;
		scanf("%d",&N);
		int i;
		for(i=0;i<N;i++)
		{
			scanf("%d",&temp);
			if(temp&1) odd++;
			else even++;
		}
		int ans=odd-even;
		ans=(ans>0)?ans:(-1)*ans;
		printf("%d\n",ans);
	}
	return 0;
}
