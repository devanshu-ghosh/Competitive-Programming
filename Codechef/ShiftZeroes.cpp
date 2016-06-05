//shift all zeroes to end
#include<stdio.h>
#include<string.h>
void display(int A[],int n)
{
	int i;
	for(i=0;i<n;i++) printf("%d",A[i]);
}
main()
{
	int A[20];
	printf("Enter No : ");int n;scanf("%d",&n);
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}
	int j;
	i=0;j=1;
	while(j!=n)
	{
		int u,v;
		u=A[i]%2;v=A[i]%2;
		if(u!=0 && v!=0) //1 1
		{
			//both numbers
			i++;j++;
		}
		else if(u==0 && v!=0) // 0 1
		{
			//we swap
			int t=A[j];
			A[j]=A[i];
			A[i]=t;
			i++;j++;
		}
		else if(u==0 && v==0) // 0 0
		{
			j++;
		}
		else// 1 0
		{
			j++;i++;
		}
	}
	display(A,n);
}
