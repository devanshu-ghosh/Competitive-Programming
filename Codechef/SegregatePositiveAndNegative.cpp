#include<stdlib.h>
#include<stdio.h>
void exchange(int i,int j,float a[])
{
	int t=a[i];
	a[i]=a[j];
	a[j]=t;
}

void display(int n,float a[])
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%.f ",a[i]);
	}
	printf("\n");
}
int inputAndStore(float a[])
{
	//initialise the array
	L:
	printf("Enter the size of Array : ");
	int n;
	scanf("%d",&n);
	if(n>20 || n<=0)
	{
		printf("Invalid Size\n");goto L;
	}
	else 
	{
		int i;
		for(i=0;i<20;i++) a[i]=0;
		for(i=0;i<n;i++)
		{
			printf("Enter value at Index %d : ",i);scanf("%f",&a[i]);
		}
		return n;
	}
	
}
int partitionA(float a[],int start,int end)
{
	float pivot=0.5;//a[end];//pivot value chosen as end
	//it is actually randomized to escape n2 case
	int pIndex=start,i;
	for(i=start;i<(end);i++)
	{
		if(a[i]<=pivot)
		{
			exchange(i,pIndex,a);
			pIndex++;
		}
	}
	exchange(pIndex,end,a);
	return pIndex;
}
main()
{
	float a[20],n;
	n=inputAndStore(a);
	int i;
	i=partitionA(a,0,n-1);printf("%d\n",i);
	display(n,a);
}
