#include<stdio.h>
#define N 5
int main()
{
	int A[5]={5,4,3,2,1};
	int c=0,i,j;
	for(i=0;i<N;i++)
	{
		for(j=i+1;j<N;j++)
		{
			c+=A[i]-A[j];
			//printf("%d %d\n",i,j);
		}
	}
	printf("%d\n",c);
	for(i=0,c=0;i<N;i++)
	{
		c+=(N-2*i-1)*A[i];
	}
	printf("%d\n",c);
}
