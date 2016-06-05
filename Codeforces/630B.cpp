#include<stdio.h>
#include<math.h>
int main()
{
	double N,T;
	scanf("%lf%lf",&N,&T);
	double ans;
	ans=pow(1.000000011,T);
	ans*=N;
	printf("%lf",ans);
}
