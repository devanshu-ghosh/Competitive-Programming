#include<stdio.h>
int main()
{
	double v1,v2,L,d;
	scanf("%lf%lf%lf%lf",&d,&L,&v1,&v2);
	//cin>>d>>L>>v1>>v2;
	L-=d;
	v1+=v2;
	double ans = L*1.0/v1;
	printf("%lf\n",ans);
}
