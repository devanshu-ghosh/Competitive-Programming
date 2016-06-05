#include<stdio.h>
int A[20];
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
	int i;
	for(i=1;i<=10;i++)
	{
		scanf("%d",&A[i]);
	}
	int index=partitionA(1,10);
	for(i=1;i<=10;i++)
	{
		printf("%d ",A[i]);
	}
	printf("\n%d",index);
	int odd=index-1;
	int even=10-index+1;
	//even=(even>0)?even:-1*even;
	printf("\n%d %d",odd,even);
}
