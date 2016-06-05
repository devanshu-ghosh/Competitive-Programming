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
	int c=1,i=2;
	while(c<=10001)
	{
		if(isPrime(i)) 
		{
			printf("c=%d %d\n",c,i);c++;
		}
		i++;
	}
}
