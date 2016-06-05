//Chefs and segments
//Gives TLE
#include<stdio.h>
int A[100005];
int ST[1000000];
int N;long long int M;
void buildST(int PN,int pr_start,int pr_end)
{
	if(pr_start==pr_end)//Means leaf node
	{
		ST[PN]=A[pr_start];
	}
	else//we split the range and build them individually
	{
		int mid=(pr_start+pr_end)/2;
		//LS and RS
		buildST(PN*2,pr_start,mid);
		buildST(PN*2+1,mid+1,pr_end);
		//Now the LS and RS have been created
		//We need to merge the results in PresentNode
		ST[PN]=ST[PN*2]*ST[PN*2+1];
	}
}
long long int query(int start,int end,int PN,int pr_start,int pr_end)
{
	if(start>pr_end || end<pr_start) return 1%M;
	else if(pr_start>=start && pr_end<=end) return ST[PN]%M;//if we get the exact interval we return it
	else//if we get some overlap we ask its childrens
	{
		int mid=(pr_start+pr_end)/2;
		long long int LS=query(start,end,PN*2,pr_start,mid)%M;
		long long int RS=query(start,end,PN*2+1,mid+1,pr_end)%M;
		return (LS*RS)%M;
	}
}
int main()
{
	int T,L,R;
	scanf("%d",&N);
	int i;
	for(i=0;i<N;i++)
	{
		scanf("%d",&A[i]);ST[i]=1;
	}
	scanf("%d",&T);
	buildST(1,0,N-1);
	while(T--)
	{
		scanf("%d%d%lld",&L,&R,&M);
		L--;R--;
		printf("%lld\n",query(L,R,1,0,N-1));
	}
	return 0;
}
