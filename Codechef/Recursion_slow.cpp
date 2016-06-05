#include<stdio.h>
typedef long long int ll;
ll mx(ll a,ll b)
{
	if(a>b) return a;
	else return b;
}
ll fun(ll N)
{
	if(N<12) return N;
	else return fun(N/2)+fun(N/3)+fun(N/4);
}
ll cache[1000000];
ll fun_memoize(ll N)
{
	if(cache[N]!=0) return cache[N];
	else//we calculate
	{
		if(N<12) 
		{
			//cache[N]=N;
			return N;//cache[N];
		}
		else
		{
			ll a=N/2,b=N/3,c=N/4;
			if(cache[a]==0) cache[a]=fun_memoize(a);
			if(cache[b]==0) cache[b]=fun_memoize(b);
			if(cache[c]==0) cache[c]=fun_memoize(c);
			return cache[a]+cache[b]+cache[c];
		}
	}
}
int main()
{
	int i=1;
	for(i=1;i<=60;i++)
	{
		ll ans1=fun_memoize(i);
		ll ans2=fun(i);
		printf("%d %lld %lld\n",i,ans1,ans2);
	}
}
