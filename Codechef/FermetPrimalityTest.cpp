//Fermet Primality test
#include<stdio.h>
#include<stdlib.h>
long long int ModExpSuperFast(long long int base,long long int index,long long int m)
{
	long long int y=1;
	while(index)
	{
		if(index&1)//if odd
			y=((y%m)*(base%m))%m;
		index=index>>1;
		//base=(base*base)%m;
		base=((base%m)*(base%m))%m;
	}
	return y;
}
//a^(p-1) %p =1
int isFermetPrime(long long int n)
{
	//20 iterations
	int i,flag=1;long long int a=1;
	for(i=1;i<=25;i++)
	{
		//1.choose random a
	L:	a=rand()%n;
		if(a==0) goto L;
		//2.check for each base
		if(ModExpSuperFast(a,n-1,n)!=1) 
		{
			//printf("N=%d Base=%d\n",n,a);
			flag=0;break;
		}
	}
	return flag;
}
int main()
{
	//something wrong
	int i;int c=0;
	for(i=3;i<=10000000;i=i+2)
		if(isFermetPrime(i)) c++;//printf("%d\n",i);
	printf("%d ",c);
}
