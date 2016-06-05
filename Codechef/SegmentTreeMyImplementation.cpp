//with lazy propagation
//0 indexing
/*
suppose if i have to find min in array using lazy propagation then y don't we do this (end-start+1) although we directly update value like SegTree[pos]+=LazyTree[pos];
plz help me out
Answer is quite simple. In RMQ, each node contain only a single element i.e.
the minimum element in the given range while in RSQ, each node contain the sum of all the elements in the given range.
*/
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
		//The final complexity depends on this merging step
		//right now it is constant time
		ST[PN]=ST[PN*2]+ST[PN*2+1];
	}
}
int query(int start,int end,int PN,int pr_start,int pr_end)
{
	if(start>pr_end || end<pr_start) return 0;//out of range
	//check for lazy node
	if(lazy[PN]!=0)
	{ 
		// This node needs to be updated
		ST[PN]+=(pr_end-pr_start+1)*lazy[PN]; // Update it
		//if not leaf node then propagate lazyness to its childs
		//bcoz leaf nodes have no childrens
		if(pr_start!=pr_end)
		{
			lazy[PN*2] += lazy[PN]; // Mark child as lazy
			lazy[PN*2+1] += lazy[PN]; // Mark child as lazy
		}
		lazy[PN]=0; // Reset it
	}
	if(pr_start>=start && pr_end<=end) return ST[PN];//if the present interval is totally contained in the query interval
	//if we get some overlap we ask its childrens
	int mid=(pr_start+pr_end)/2;
	int LS=query(start,end,PN*2,pr_start,mid);
	int RS=query(start,end,PN*2+1,mid+1,pr_end);
	return LS+RS;
}
void range_update(int start,int end,int value,int PN,int pr_start,int pr_end)
{
	//we check the laziness
	if(lazy[PN]!=0)
	{
		// This PN needs to be updated
   		ST[PN]+=(pr_end-pr_start+1)*lazy[PN]; // Update it
   		//propagate the lazy update to its childrens
		if(pr_start!=pr_end)//check to ensure the boundary conditions
		{
			lazy[PN*2]+=lazy[PN]; // Mark child as lazy
			lazy[PN*2+1]+=lazy[PN]; // Mark child as lazy
		}
   		lazy[PN]=0; // Reset it
  	}
  	if(start>pr_end || end<pr_start) return;//out of range
	//if fully contained in the range
	if(start>=pr_start && end<=pr_end)
	{
		//Segment is fully within range
		//so we update the current node and mark its children in the lazy
		//and return back. No further operations
    	ST[PN]+=(pr_end-pr_start+1)*value;//we are adding 
		if(pr_start!=pr_end)//check to ensure the boundary conditions
		{
				lazy[PN*2]+=value; // Mark child as lazy
    			lazy[PN*2+1]+=value; // Mark child as lazy
		}
    	return;
	}
	//we split the range and update them individually
	int mid=(pr_start+pr_end)/2;
	//LS
	range_update(start,end,value,PN*2,pr_start,mid);
	//RS
	range_update(start,end,value,PN*2+1,mid+1,pr_end);
	//Now the LS and RS have been updated
	//We need to merge the results in PresentNode
	ST[PN]=ST[PN*2]+ST[PN*2+1];
}
void initialize(int index,int value,int PN,int pr_start,int pr_end)
{
	if(pr_start==pr_end)//Means leaf node
	{
		if(index==pr_start) ST[PN]+=value;
	}
	else//we split the range and update them individually
	{
		int mid=(pr_start+pr_end)/2;
		if(index>=pr_start && index<=mid)//LS
			initialize(index,value,PN*2,pr_start,mid);
		else//RS
			initialize(index,value,PN*2+1,mid+1,pr_end);
		//Now the LS and RS have been updated
		//We need to merge the results in PresentNode
		ST[PN]=ST[PN*2]+ST[PN*2+1];
	}
}
int main()
{
	inputAndStore();
	buildST(1,0,N-1);
	//printf("Enter the no of queries : ");
	//int T;
	//scanf("%d",&T);
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
			range_update(l,r,value,1,0,N-1);
		}
	}
}

