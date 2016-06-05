#include<stdio.h>
#include<math.h>
long long int noOfFactors(long long int n)
{
	int i,c=0;
	double x=sqrt(n);
	for(i=1;i<=x;i++)
	{
		if(n%i==0) c++;
	}
	if((int)(x*10)==(x*10))
	{
		//perfect square
		return 2*c-1;
	}
	else
	return 2*c;
}
int main()
{
	int i,t,D;
	for(i=1;i<=100000;i++)
	{
		t=i*(i+1)/2;
		D=noOfFactors(t);
		if(D>500) break;
	}
	printf("%d ",t);
}
