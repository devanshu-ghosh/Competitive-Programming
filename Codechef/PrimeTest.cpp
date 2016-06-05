//prime test
#include<stdio.h>
#include<math.h>
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
int main()
{
	int i,c=0;
	for(i=3;i<=31607;i=i+2)
	{
		if(isPrime(i))
		{
			 printf("%d %d\n",i,i*i);c++;
		} 
		//c++;
	}
	printf("%d",c);
}
