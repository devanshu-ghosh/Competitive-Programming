#include<stdio.h>
#include<math.h>
#define MAX 10000
typedef int ll;
int prime[MAX+1];
int phis[MAX+1];
void sieve()
{
    prime[0]=1;
    prime[1]=1;
    int i,j;
    for(i=2;i<=MAX;i++)
	{
        if(!prime[i])
		{
            prime[i]=i;
            for(j=i;j*i<=MAX;j++)
			{
                prime[j*i]=i;
            }
        }
    }
}
long long int primeFactorize(ll n)
{
    long long int yy=1;
    for( ; n > 1 ; )
	{
        int p = prime[n] , e = 0 ;
        for( ; n % p == 0 ; n /= p , e++ ) ;  
        yy*= (1LL)*((p-1)*(pow((double)p,e-1)));
    }
    return yy;
}
void precompute()
{
	phis[1]=1;
	phis[2]=1;
	int i;
	for(i=3;i<MAX;i++)
		phis[i]=(ll)primeFactorize(i);
}
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
long long int ans(ll n)
{
	ll i=1;
	//ll sum=0;
	long long int sum=0;
	for(i=1;(i*i)<n;i++)
	{
		if(n%i==0)
		{
			sum+=(1LL*n*phis[n/i])/(1LL*i);
			sum+=1LL*i*phis[i];
		}
	}
	if(isPerfect(n))
		sum+=(1LL)*(ll)sqrt(n)*phis[(ll)sqrt(n)];
	return sum;
}
int main()
{
	sieve();
	precompute();
	ll T,N;
	scanf("%d",&T);
	while(T--)
	{
		fr(&N);
		if(N>MAX)
			printf("%lld\n",ans2(N));
		else
		{
			printf("%lld\n",ans(N));
		}
	}
}
