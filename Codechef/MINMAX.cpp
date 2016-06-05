#include<stdio.h>
#define ll long int
int N;
typedef struct node
{
	long int min,max;
}node;
ll A[100005];
node ST[1000000];
void buildST(int PN,int pr_start,int pr_end)
{
	if(pr_start==pr_end)//Means leaf node
	{
		ST[PN].max=A[pr_start];
		ST[PN].min=A[pr_start];
	}
	else//we split the range and build them individually
	{
		int mid=(pr_start+pr_end)/2;
		//LS and RS
		buildST(PN*2,pr_start,mid);
		buildST(PN*2+1,mid+1,pr_end);
		//Now the LS and RS have been created
		//We need to merge the results in PresentNode
		//The final complexity depends on this merging step
		//right now it is constant time
		//ST[PN]=ST[PN*2]+ST[PN*2+1];
		int min,max;
		max=(ST[PN*2].max>ST[PN*2+1].max)?ST[PN*2].max:ST[PN*2+1].max;
		min=(ST[PN*2].min<ST[PN*2+1].min)?ST[PN*2].min:ST[PN*2+1].min;
		ST[PN].min=min;
		ST[PN].max=max;	
	}
}
node query(int start,int end,int PN,int pr_start,int pr_end)
{
	if(start>pr_end || end<pr_start)
	{
		node ans;
		ans.min=0;
		ans.max=0;
		return ans;
	} 
	//if(end<pr_start) return 0;
	else if(pr_start>=start && pr_end<=end)
	{
		node ans;
		ans.min=ST[PN].min;
		ans.max=ST[PN].max;
		return ans;
	} //return ST[PN];//if the present interval is totally contained in the query interval
	else//if we get some overlap we ask its childrens
	{
		node ansL,ansR,ans;
		int mid=(pr_start+pr_end)/2;
		ansL=query(start,end,PN*2,pr_start,mid);
		ansR=query(start,end,PN*2+1,mid+1,pr_end);
		ans.max=(ansL.max>ansR.max)?ansL.max:ansR.max;
		ans.min=(ansL.min<ansR.min)?ansL.min:ansR.min;
		return ans;
		//return LS+RS;
	}
}
int main()
{
	int Q;
	scanf("%d%d",&N,&Q);
	int i,l,r;
	for(i=0;i<N;i++) scanf("%ld",&A[i]);
	buildST(1,0,N-1);
	for(i=0;i<Q;i++)
	{
		scanf("%d%d",&l,&r);
		node ans;
		ans=query(l,r,1,1,N-1);
		printf("%d\n",ans.max-ans.min);
	}
}
