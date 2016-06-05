#include<stdio.h>
int A[42];
int main()
{
	int T=10,temp,count=0;
	while(T--)
	{
		int i;
		for(i=0;i<10;i++)
		{
			scanf("%d",&temp);
			A[temp%42]=1;
		}
		for(i=0;i<42;i++) if(A[i]==1) count++;
		printf("%d\n",count);
		count=0;
		//initialize the HASH
		for(i=0;i<42;i++) A[i]=0;
	}
	return 0;
}
