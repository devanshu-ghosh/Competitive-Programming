//0 indexing
#include<stdio.h>
int A[100];
int ST[100];
int lazy[100];
int N;
void inputAndStore()
{
	printf("Enter the No of elements : ");
	scanf("%d",&N);
	int i;
	for(i=0;i<N;i++)
	{
		scanf("%d",&A[i]);
	}
}
void buildST(int PN,int pr_start,int pr_end)
{
	if(pr_start==pr_end)
		ST[PN]=A[pr_start];
	else
	{
		int mid=(pr_start+pr_end)/2;
		buildST(PN*2,pr_start,mid);
		buildST(PN*2+1,mid+1,pr_end);
		ST[PN]=ST[PN*2]+ST[PN*2+1];
	}
}
int query(int start,int end,int PN,int pr_start,int pr_end)
{
	if(start>pr_end || end<pr_start) return 0;
	if(lazy[PN]!=0)
	{
		ST[PN]+=(pr_end-pr_start+1)*lazy[PN];
		if(pr_start!=pr_end)
		{
			lazy[PN*2] += lazy[PN];
			lazy[PN*2+1] += lazy[PN];
		}
		lazy[PN]=0;
	}
	if(pr_start>=start && pr_end<=end) return ST[PN];
	int mid=(pr_start+pr_end)/2;
	int LS=query(start,end,PN*2,pr_start,mid);
	int RS=query(start,end,PN*2+1,mid+1,pr_end);
	return LS+RS;
}
void range_update(int start,int end,int value,int PN,int pr_start,int pr_end)
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
		if(pr_start!=pr_end)
		{
				lazy[PN*2]+=value;
    			lazy[PN*2+1]+=value;
		}
    	return;
	}
	int mid=(pr_start+pr_end)/2;
	range_update(start,end,value,PN*2,pr_start,mid);
	range_update(start,end,value,PN*2+1,mid+1,pr_end);
	ST[PN]=ST[PN*2]+ST[PN*2+1];
}
void range_updateM(int start,int end,int value,int PN,int pr_start,int pr_end)
{
	if(lazy[PN]!=0)
	{
   		ST[PN]+=(pr_end-pr_start+1)*lazy[PN]*value;
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
    	ST[PN]+=(pr_end-pr_start+1)*value*value;
		if(pr_start!=pr_end)
		{
				lazy[PN*2]+=value;
    			lazy[PN*2+1]+=value;
		}
    	return;
	}
	int mid=(pr_start+pr_end)/2;
	range_updateM(start,end,value,PN*2,pr_start,mid);
	range_updateM(start,end,value,PN*2+1,mid+1,pr_end);
	ST[PN]=ST[PN*2]+ST[PN*2+1];
}
int main()
{
	inputAndStore();
	buildST(1,0,N-1);
	while(1)
	{
		puts("1.Range Query 2.Range Update 3.Exit");
		int c;
		scanf("%d",&c);
		if(c==3) break;
		if(c==1)
		{
			int l,r;
			scanf("%d%d",&l,&r);
			printf("%d-%d : %d\n",l,r,query(l,r,1,0,N-1));
		}
		else
		{
			int l,r,value;
			scanf("%d%d%d",&l,&r,&value);
			range_updateM(l,r,value,1,0,N-1);
		}
	}
}

