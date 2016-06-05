#include<stdio.h>
void factModulo(int n,int m)
{
	int i,fact=1;
	for(i=2;i<=n;i++)
	{
		fact=(fact*i)%m;
	}
	printf("%d",fact);
}
main()
{
	factModulo(5,100);
}
