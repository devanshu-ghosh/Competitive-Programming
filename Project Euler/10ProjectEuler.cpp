#include<stdio.h>
#include<math.h>
int isPrime(int n)
{
	if(n<0) return 0;
	if(n==2) return 1;
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
	int i;long long int s=2;
	for(i=3;i<2000000;i=i+2)
	{
		if(isPrime(i)) 
			s=s+i;
	}
	printf("SUM = %lld",s);
}
