#include<stdio.h>
typedef struct segmentNode
{
	int sum;//stores the sum
	int updateValue;//stores the update that is to applied to it
}node;
int A[100];
node ST[100];
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
		ST[PN].sum=A[pr_start];
		ST[PN].updateValue=0;//set the update value to zero for time being
		
	}
	else//we split the range and build them individually
	{
		int mid=(pr_start+pr_end)/2;
		//LS and RS
		buildST(PN*2,pr_start,mid);
		buildST(PN*2+1,mid+1,pr_end);
		//Now the LS and RS have been created
		//We need to merge the results in PresentNode
		ST[PN].sum=ST[PN*2].sum+ST[PN*2+1].sum;
	}
}
int query(int start,int end,int PN,int pr_start,int pr_end)
{
	if(start>pr_end || end<pr_start) return 0;
	//if(end<pr_start) return 0;
	else if(pr_start>=start && pr_end<=end) return ST[PN].sum;//if present interval is fully contained in the queried interval
	else//if we get some overlap we ask its childrens
	{
		int mid=(pr_start+pr_end)/2;
		int LS=query(start,end,PN*2,pr_start,mid);
		int RS=query(start,end,PN*2+1,mid+1,pr_end);
		return LS+RS;
	}
}
int update(int index,int value,int PN,int pr_start,int pr_end)
{
	if(pr_start==pr_end)//Means leaf node
	{
		if(index==pr_start) ST[PN].sum=value;
	}
	else//we split the range and update them individually
	{
		int mid=(pr_start+pr_end)/2;
		if(index>=pr_start && index<=mid)//LS
			update(index,value,PN*2,pr_start,mid);
		else//RS
			update(index,value,PN*2+1,mid+1,pr_end);
		//Now the LS and RS have been created
		//We need to merge the results in PresentNode
		ST[PN].sum=ST[PN*2].sum+ST[PN*2+1].sum;
	}
}
int main()
{
	inputAndStore();
	buildST(1,0,N-1);
	//update(3,5,1,0,N-1);
	printf("2-3 : %d\n",query(2,3,1,0,N-1));
	printf("1-3 : %d\n",query(1,3,1,0,N-1));
	printf("1-5 : %d\n",query(1,5,1,0,N-1));
}

