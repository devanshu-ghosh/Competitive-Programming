#include<stdio.h>
int zeroes(int n,int p)
{
	int pow;
	pow=p;
	int x,s=0;
	do
	{
		x=n/pow;
		pow=pow*p;
		s=s+x;
	}while(x!=0);
	return s;
}
int main(void)
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long int y;
		scanf("%lld",&y);
		int z2=zeroes(y,2);
		int z5=zeroes(y,5);
		int min=(z5<z2)?z5:z2;
		printf("%d\n",min);
	}
	return 0;
}
