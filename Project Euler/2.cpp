#include<stdio.h>
//even fibo
int main()
{
	int a=0,b=1,s=0,fib=0;
	while(fib<=4000000)
	{
		fib=a+b;
		if(fib%2==0)
		s=s+fib;
		a=b;b=fib;
	}
	printf("%d",s);
}
