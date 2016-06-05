//MILLER RABIN
#include<stdio.h>
long int ModExpSuperFast(long int base,long int index,long int m)
{
	long int y=1;
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
int witness(long int base,long int n)
{
	//STEP 1 : FIND N-1=2^K*M M IS ODD
	long int newN=n-1;
	long int k=1,m=newN/2;
	while(!(m&1))
	{
		m=m/2;
		k++;
	}
	//printf("%d %d ",k,m);
	//STEP 2:TEST THE BASE WITH THE TEST
	int i=1;
	long int b=ModExpSuperFast(base,m,n);
	if(b==1 || b==(n-1)) return 1;
	while(i<=k)
	{
		b=ModExpSuperFast(b,2,n);
		i++;
		if(b==(n-1)) return 1;
	}
	return 0;
}
int isPrime(long int n)
{
	return (witness(2,n)||witness(3,n));
}
int main()
{
	long int i,c=0;
	for(i=3;i<=99;i=i+2)
	{
		if(isPrime(i))//c++;
		printf("%d ",i);
	}
	//printf("%d",c);
}
