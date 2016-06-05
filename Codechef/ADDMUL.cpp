#include<iostream>
#define M 1000000007
using namespace std;
typedef long long int ll;
ll A[100005];
ll ST[1000000];
ll lazy[1000000];
void buildST(ll PN,ll pr_start,ll pr_end)
{
	if(pr_start==pr_end)
		ST[PN]=A[pr_start];
	else
	{
		ll mid=(pr_start+pr_end)/2;
		buildST(PN*2,pr_start,mid);
		buildST(PN*2+1,mid+1,pr_end);
		ST[PN]=ST[PN*2]+ST[PN*2+1];
		ST[PN]=ST[PN]%M;
	}
}
ll query(ll start,ll end,ll PN,ll pr_start,ll pr_end)
{
	if(start>pr_end || end<pr_start) return 0;
	if(lazy[PN]!=0)
	{
		ST[PN]+=(pr_end-pr_start+1)*lazy[PN];
		ST[PN]=ST[PN]%M;
		if(pr_start!=pr_end)
		{
			lazy[PN*2]+=lazy[PN];
			lazy[PN*2+1]+=lazy[PN];
		}
		lazy[PN]=0;
	}
	if(pr_start>=start && pr_end<=end) return ST[PN];
	ll mid=(pr_start+pr_end)/2;
	ll LS=query(start,end,PN*2,pr_start,mid)%M;
	ll RS=query(start,end,PN*2+1,mid+1,pr_end)%M;
	return (LS+RS)%M;
}
void range_update_add(ll start,ll end,ll value,ll PN,ll pr_start,ll pr_end)
{
	if(lazy[PN]!=0)
	{
   		ST[PN]+=(pr_end-pr_start+1)*lazy[PN];
		if(pr_start!=pr_end)
		{
			lazy[PN*2]+=lazy[PN];
			lazy[PN*2+1]+=lazy[PN];
		}
   		lazy[PN]=0;
  	}
  	if(start>pr_end || end<pr_start) return;
	if(start>=pr_start && end<=pr_end)
	{
    	ST[PN]+=(pr_end-pr_start+1)*value;
    	ST[PN]=ST[PN]%M;
		if(pr_start!=pr_end)
		{
				lazy[PN*2]+=value;
    			lazy[PN*2+1]+=value;
		}
    	return;
	}
	ll mid=(pr_start+pr_end)/2;
	range_update_add(start,end,value,PN*2,pr_start,mid);
	range_update_add(start,end,value,PN*2+1,mid+1,pr_end);
	ST[PN]=(ST[PN*2]+ST[PN*2+1])%M;
}
int main()
{
	int N,Q;
	cin>>N>>Q;
	int i;
	for(i=0;i<N;i++)
		cin>>A[i];
	buildST(1,0,N-1);
	int x,y,type,value;
	while(Q--)
	{
		cin>>type>>x>>y;
		x--;y--;//0 indexing
		if(type==1)
		{
			cin>>value;
			range_update_add(x,y,value,1,0,N-1);
		}
		else if(type==2)
		{
			cin>>value;
			//multiply the value to all the indexes
		}
		else if(type==3)
		{
			cin>>value;
			//initialize the index by v
			//multiply by 0 and add v
		}
		else
			cout<<query(x,y,1,0,N-1)<<endl;
	}
	return 0;
}
