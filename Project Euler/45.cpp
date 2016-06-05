#include<stdio.h>
#include<math.h>
int isInteger(double x)
{
	double y=ceil(x);
	int xx=(int)x;
	int yy=(int)y;
	if(xx==yy) return 1;
	else return 0;
}
int isPentagonal(long long int n)
{
	double x=(sqrt(24*n+1)+1)/6;
	if(isInteger(x)) return 1;
	else return 0;
}
int isHexagonal(long long int n)
{
	double x=(sqrt(8*n+1)+1)/4;//printf("%lf ",x);
	if(isInteger(x)) return 1;
	else return 0;
}
int main()
{
	printf("%d\n",isHexagonal(40755));
	long long i,x;
	for(i=286;;i++)
	{
		//ALL HEXAGONAL NUMBERS ARE TRIANGULAR NUMBERS
		x=i*(2*i-1);
		if(isPentagonal(x))
		{
				printf("%lld",x);
				break;
		}
//		x=(i*(i+1))/2;
//		if(isPentagonal(x))
//		{
//				printf("%d",x);
//				break;
//		}
	}
}
