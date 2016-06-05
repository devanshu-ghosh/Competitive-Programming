#include<stdio.h>
#include<limits.h>
#define INF 1000000
int A[100];
int ST[100];//for minimum
int ST_max[100];//for maximum
int N;
void inputAndStore()
{
	printf("Enter the No of elements : ");
	scanf("%d",&N);
	int i;
	for(i=1;i<=N;i++)
	{
		scanf("%d",&A[i]);
	}
}
void buildST(int PN,int pr_start,int pr_end)
{
	if(pr_start==pr_end)//Means leaf node
	{
		ST[PN]=A[pr_start];
		ST_max[PN]=A[pr_start];
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
		if(ST[PN*2]<ST[PN*2+1])
		{
			ST[PN]=ST[PN*2];
			ST_max[PN]=ST_max[PN*2+1];
		}	
		else
		{
			ST[PN]=ST[PN*2+1];
			ST_max[PN]=ST_max[PN*2];
		}
	}
}
long int querymin(int start,int end,int PN,int pr_start,int pr_end)
{
	if(start>pr_end || end<pr_start) return LONG_MAX;
	//if(end<pr_start) return 0;
	else if(pr_start>=start && pr_end<=end) return ST[PN];//if the present interval is totally contained in the query interval
	else//if we get some overlap we ask its childrens
	{
		int mid=(pr_start+pr_end)/2;
		int LS=query(start,end,PN*2,pr_start,mid);
		int RS=query(start,end,PN*2+1,mid+1,pr_end);
		//return LS+RS;
		if(LS<=RS) return LS;
		else return RS;
	}
}
long int querymax(int start,int end,int PN,int pr_start,int pr_end)
{
	if(start>pr_end || end<pr_start) return INF;
	//if(end<pr_start) return 0;
	else if(pr_start>=start && pr_end<=end) return ST[PN];//if the present interval is totally contained in the query interval
	else//if we get some overlap we ask its childrens
	{
		int mid=(pr_start+pr_end)/2;
		int LS=query(start,end,PN*2,pr_start,mid);
		int RS=query(start,end,PN*2+1,mid+1,pr_end);
		//return LS+RS;
		if(LS<=RS) return LS;
		else return RS;
	}
}
int main()
{
	inputAndStore();
	buildST(1,1,N);
	//update(3,5,1,0,N-1);
	printf("2-3 : %d\n",query(2,3,1,1,N));
	//update(3,5,1,0,N-1);
	printf("2-3 : %d\n",query(2,3,1,1,N));
	printf("1-3 : %d\n",query(1,3,1,1,N));
	printf("4-6 : %d\n",query(4,6,1,1,N));
}

