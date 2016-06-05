//prime test
#include<stdio.h>
#include<math.h>
int A[10000000];
int isPrime(long long int n)
{
	if(!(n&1)) return 0;
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
int main()
{
	int i,c=0;A[c]=2;c++;
	for(i=3;i<=10000;i=i+2)
	{
		if(isPrime(i))
		{
			A[c]=i;
			c++;
		}
	}
	int j;int count=0;
	long long int p;
	for(i=0;i<c;i++)
	{
		for(j=0;j<c;j++)
		{
			p=A[i]*A[j];
			if(isPrime(p-1) || isPrime(p+1))
			{
			}//printf("%d %d\n",A[i],A[j]);
			else count++;//printf("%d %d\n",A[i],A[j]);
		}
	}
	printf("%d %d\n",count,c);
	double d=(count*count*1.0)/(c*c);
	//printf("%ld",d);
}
