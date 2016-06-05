#include<stdio.h>
//Very elegant solution . 
//we broke the no of subarray function into sum of individual parts
//very good solution
long long int A[100000];
long long int C[100000];
/*int checkInc(int i,int j)
{
	int temp=A[i];
	int h,flag=1;
	for(h=i+1;h<=j;h++)
	{
		if(A[h]<A[h-1]) 
		{
			flag=0;
			break;
		}
	}
	return flag;
}*/
int main()
{
	int T,N;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d",&N);
		int i,j;
		for(i=0;i<N;i++)
			scanf("%lld",&A[i]);
		C[0]=0;
		int index=1;
		for(i=1;i<N;i++)
		{
			if(A[i]<A[i-1])
			{
				C[index]=i;
				index++;
			}
		}
		C[index]=N;
		long long int c=0,n;
		i=0;j=1;
		while(j<=index)
		{
			n=C[j]-C[i];
			c+=((n+1)*n)/2;
			i=j;
			j++;
		}
		/*for(i=0;i<=(N-2);i++)
		{
			for(j=2+i;j<=N;j++)
			{
				if(A[j]>A[j-1]) c++;
				else break;
			}
		}*/
		printf("%lld\n",c);
	}
}
