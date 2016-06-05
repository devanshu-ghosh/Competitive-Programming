//MILLER RABIN
#include<stdio.h>
#include<math.h>
int isSqrtPrime(int n)
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
	//printf("k:%d m:%d ",k,m);
	//STEP 2:TEST THE BASE WITH THE TEST
	int i=1;
	long int b=ModExpSuperFast(base,m,n),bN;
	//printf("b0:%d ",b);
	while(i<=k)
	{
		bN=ModExpSuperFast(b,2,n);//printf("b%d:%d ",i,bN);
		if(bN==1 && b!=1 && b!=(n-1)) return 0;
		i++;
		b=bN;
	}
	if(bN!=1) return 0;
	return 1;
}
int isPrime(long int n)
{
	/*if(witness(2,n)==0) return 0;
	else
	{
		return witness(3,n);
	}*/
	return witness(61,n);
}
int main()
{
	long int i,c=0;
	for(i=44999;i<=49999;i=i+2)
	{
		if(isPrime(i) != isSqrtPrime(i))//c++;
		printf("%d ",i);
	}
	//printf("%d",c);
	//int x=witness(2,121);printf("\n%d",x);
}
