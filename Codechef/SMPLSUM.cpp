#include<stdio.h>
#include<math.h>
typedef int ll;
void fr(ll *a)
{
 	char c=0;
 	while (c<33) c=getchar();
 	*a=0;
 	while (c>33)
 	{
 	    *a=*a*10+c-'0';
 	    c=getchar();
 	}
}
ll phi (ll n)
{
	ll result = n;
	for (ll i=2; i*i<=n; ++i)
		if (n % i == 0)
		{
			while(n % i == 0)
				n /= i;
			result -= result / i;
		}
	if (n > 1)
		result -= result / n;
	return result;
}
ll isPerfect(ll n)
{
	ll x=(int)sqrt(n);
	return (x*x==n);
}
long long int ans2(ll n)
{
	ll i=1;
	//ll sum=0;
	long long int sum=0;
	for(i=1;(i*i)<n;i++)
	{
		if(n%i==0)
		{
			sum+=(1LL*n*phi(n/i))/(1LL*i);
			sum+=1LL*i*phi(i);
		}
	}
	if(isPerfect(n))
		sum+=(1LL)*(ll)sqrt(n)*phi((ll)(sqrt(n)));
	return sum;
}
int main()
{
	ll T,N;
	scanf("%d",&T);
	while(T--)
	{
		fr(&N);
		printf("%lld\n",ans2(N));
	}
}
