#include<stdio.h>
#include<limits.h>
long long int A[1000005];
long long int Query[1000005];
long long int CS[1000005];
int main()
{
	int T,i;
	long long int N,H,l,r;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%lld%lld",&N,&H);
		//initialize A with N
		for(i=0;i<N;i++)
			A[i]=N;
		//scannig the queries
		for(i=0;i<N;i++)
		{
			scanf("%lld%lld",&l,&r);
			Query[l]++;
			Query[r+1]--;
		}
		//applying the queries
		for(i=1;i<N;i++)
		{
			Query[i]+=Query[i-1];
		}
		//applying the queries on the Actual array
		for(i=0;i<N;i++)
			A[i]-=Query[i];
		//Now we have to find the subarray of size H whose sum is minimum in A
		
		/*CS[0]=0;
		for(i=1;i<=N;i++)
		{
			CS[i]=CS[i-1]+A[i-1];
		}
		long long int sum=0,min=CS[H];
		//generate subarray of length H
		for(i=1;(i+H)<N;i++)
		{
			sum=CS[i+H]-CS[i];
			if(sum<min) min=sum;
		}*/
		long long int sum=0,min;
		for(i=0;i<H;i++)
			sum+=A[i];
		min=sum;
		for(i=1;i<=(N-H);i++)
		{
			sum=sum-A[i-1]+A[i+H-1];
			if(sum<min) min=sum;
		}
		printf("%lld\n",min);
		//initialize the arrays
		for(i=0;i<=(N+2);i++)
		{
			A[i]=0;Query[i]=0;CS[i]=0;
		}
	}
	return 0;
}
