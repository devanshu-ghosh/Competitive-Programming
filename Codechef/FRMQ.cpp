#include<stdio.h>
#include<limits.h>
#define INF ULONG_MAX
typedef long long int ll;
ll minVal(ll x, ll y) { return (x <= y)? x: y; }
ll maxVal(ll x, ll y) { return (x >= y)? x: y; }
ll A[100005];
ll ST[1000000];
ll N;
void inputAndStore()
{
	scanf("%lld",&N);
	ll i;
	for(i=0;i<N;i++)
		scanf("%lld",&A[i]);
}
void buildST(ll PN,ll pr_start,ll pr_end)
{
	if(pr_start==pr_end)
		ST[PN]=A[pr_start];
	else
	{
		ll mid=(pr_start+pr_end)/2;
		buildST(PN*2,pr_start,mid);
		buildST(PN*2+1,mid+1,pr_end);
		ST[PN]=maxVal(ST[PN*2],ST[PN*2+1]);
	}
}
ll query(ll start,ll end,ll PN,ll pr_start,ll pr_end)
{
	if(start>pr_end || end<pr_start) return -INF;
	else if(pr_start>=start && pr_end<=end) return ST[PN];
	else
	{
		ll mid=(pr_start+pr_end)/2;
		ll LS=query(start,end,PN*2,pr_start,mid);
		ll RS=query(start,end,PN*2+1,mid+1,pr_end);
		return maxVal(LS,RS);
	}
}
int main()
{
	inputAndStore();
	ll M,x,y,l,r,i;
	ll sum=0;
	scanf("%lld%lld%lld",&M,&x,&y);
	buildST(1,0,N-1);
	l=minVal(x,y);
	r=maxVal(x,y);
	sum=query(l,r,1,0,N-1);
	//printf("%lld\n",sum);
	for(i=2;i<=M;i++)
	{
		x=(x+7)%(N-1);
		y=(y+11)%N;
		l=minVal(x,y);
		r=maxVal(x,y);
		sum+=query(l,r,1,0,N-1);
	}
	printf("%lld\n",sum);
	return 0;
}

