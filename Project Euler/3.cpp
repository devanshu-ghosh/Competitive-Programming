#include<stdio.h>
int main()
{
	long long int n=600851475143,i=3;
	while(i<n)
	{
		if(n%i==0)
		{
			printf("%lld ",i);
		}
		i=i+2;
	}
}
