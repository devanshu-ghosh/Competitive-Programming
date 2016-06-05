#include<stdio.h>
int gcd(int a,int b)
{
	if(b==0) return a;
	else return gcd(b,a%b);
}
int ModExpSuperFast(int base,int index,int m)
{
	int y=1;
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
int period(int n)
{
	int i=1;
	if(gcd(n,10)==1)
	{
		while(ModExpSuperFast(10,i,n)!=1) i++;
		return i;
	}	
	else return 0;
}
int main()
{
	int i,c=0,cPrev=-1;
	for(i=3;i<=1000;i++)
	{
		c=period(i);
		if(c>cPrev)
		{
			cPrev=c;
			//printf("ok 1");
			printf("%d = %d\n",i,period(i));//printf("Period : %d = %d \n",i,period(i));
		}
	}
}
