#include<stdio.h>
long long int fib[1000];
int count=0;
int fibo(long long int N)
{
	int ans,i=1;
	if(fib[count]>N)
	{
		//search it
		while(i<=count)
		{
			if(fib[i]<N) i++;
			else break;
		}
		if(fib[i]==N) ans=i;
		else ans=i-1;
	}
	else
	{
		//generate the fibs till just less than or equal
		while(fib[i]<=N)
		{
			count++;i++;
			fib[count]=fib[count-1]+fib[count-2];
		}
		ans=i-1;
	}
	return ans;
}
int main()
{
	fib[0]=1;
	fib[1]=1;
	count=1;
	long long int N;
	long int T;
	scanf("%ld",&T);
	while(T--)
	{
		scanf("%lld",&N);
		printf("%d\n",fibo(N));
	}
	return 0;
}
