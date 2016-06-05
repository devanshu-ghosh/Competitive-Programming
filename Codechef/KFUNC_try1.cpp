#include<stdio.h>
typedef long long int ll;
using namespace std;
ll f(ll n)
{
	if(n%9==0) return 9;
	else return n%9;
}
int main()
{
	int T,A1,D;
	ll L,R;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d%d%lld%lld",&A1,&D,&L,&R);
		ll sum=0;
		A1=f(A1);
		D=f(D);
		int i;
		int x=f(A1+f(L-1)*D);
		sum=x;
		for(i=L+1;i<=R;i++)
		{
			x=f(x+D);
			sum+=x;
		}
		printf("%lld\n",sum);
	}
	return 0;
}
