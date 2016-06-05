//NUMFACT
#include<stdio.h>
#include<math.h>
typedef struct element
{
	int freq;
	int p;
}node;
node prime[100000];
int isPrime(int n)
{
	int i,flag=1,x=sqrt(n);
	for(i=3;i<=x;i=i+2)
	{
		if(n%i==0)
		{
			flag=0;break;
		}
	}
	return flag;
}
void factor(int n)
{
	int i=0,c=0;;
	while(n!=1)
	{
		if(n%prime[i].p==0)
		{
			n=n/prime[i].p;
			c++;
		}
		else
		{
			prime[i].freq+=c;
			c=0;i++;
		}
	}
	prime[i].freq+=c;
	c=0;i++;
}
int main()
{
	//create a prime array to hold all primes till 10^6
	int i,c=0;
	prime[c].p=2;c++;
	for(i=3;i<=1000000;i=i+2)
	{
		if(isPrime(i))
		{
			prime[c].p=i;
			c++;
		}
	}
	int T,N,temp;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d",&N);
		for(i=0;i<N;i++)
		{
			scanf("%d",&temp);
			factor(temp);
		}
		long long int num=1;
		for(i=0;i<=c;i++)
		{
			num*=(prime[i].freq+1);
		}
		printf("%d\n",num);
		num=1;
		//initialize the prime frequency table
		for(i=0;i<=c;i++)
		{
			prime[i].freq=0;
		}
	}
	return 0;
}
