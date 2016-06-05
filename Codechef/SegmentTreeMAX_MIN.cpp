//segment tree both max and min
//indexing starts from 0
#include<stdio.h>
#include<limits.h>
#define INF ULONG_MAX
typedef long long int ll;
typedef struct node
{
	ll max,min;
}node;
ll minVal(ll x, ll y) { return (x <= y)? x: y; }
ll maxVal(ll x, ll y) { return (x >= y)? x: y; }
ll A[100005];
node ST[1000000];
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
	{
		ST[PN].max=A[pr_start];
		ST[PN].min=A[pr_start];
	}
	else
	{
		ll mid=(pr_start+pr_end)/2;
		buildST(PN*2,pr_start,mid);
		buildST(PN*2+1,mid+1,pr_end);
		ST[PN].max=maxVal(ST[PN*2].max,ST[PN*2+1].max);
		ST[PN].min=minVal(ST[PN*2].min,ST[PN*2+1].min);
	}
}
node query(ll start,ll end,ll PN,ll pr_start,ll pr_end)
{
	node t;
	if(start>pr_end || end<pr_start)
	{
		t.max=-INF;
		t.min=INF;
		return t;
	} 
	else if(pr_start>=start && pr_end<=end)
	{
		t.max=ST[PN].max;
		t.min=ST[PN].min;
		return t;
	} 
	else
	{
		ll mid=(pr_start+pr_end)/2;
		node LS=query(start,end,PN*2,pr_start,mid);
		node RS=query(start,end,PN*2+1,mid+1,pr_end);
		t.max=maxVal(LS.max,RS.max);
		t.min=minVal(LS.min,RS.min);
		return t;
	}
}
int main()
{
	inputAndStore();
	ll M,l,r;
	scanf("%lld",&M);
	buildST(1,0,N-1);
	while(M--)
	{
		scanf("%lld%lld",&l,&r);
		node t=query(l,r,1,0,N-1);
		printf("MAX:%lld MIN:%lld\n",t.max,t.min);
	}
	return 0;
}

