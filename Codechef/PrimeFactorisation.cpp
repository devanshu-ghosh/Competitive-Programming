//Chefs and segments
//Gives TLE
#include<stdio.h>
int A[100005];
int Prime[]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97};
int PF[101][25];
int ModExp(int base,int index,int m)
{
	int y=1;
	while(index)
	{
		if(index&1)//if odd
			y=((y%m)*(base%m))%m;
		index=index>>1;
		//base=(base*base)%m;
		base=((base%m)*(base%m))%m;
	}
	return y;
}
void factor()
{
	int i,j;
	for(i=1;i<=100;i++)
	{
		int n=i;
		for(j=0;j<25;j++)
		{
			while(n%Prime[j]==0)
			{
				n=n/Prime[j];
				PF[i][j]++;
			}
			if(n==1) break;
		}
	}
}
int segment[25];
long long int ans(int L,int R,int M)
{
	int i,j;
	//initialise segment
	for(i=0;i<25;i++) segment[i]=0;
	
	long long int p=1;
	for(i=L;i<=R;i++)
	{
		//no. A[i]
		for(j=0;j<25;j++)
		{
			segment[j]+=PF[A[i]][j];
		}
	}
	for(i=0;i<25;i++)
	{
		p=p+ModExp(Prime[i],segment[i],M);
		p=p%M;
	}
	return p;
}
int main()
{
	int N,T,L,R,M;
	scanf("%d",&N);
	int i;
	for(i=1;i<=N;i++)
	{
		scanf("%d",&A[i]);
	}
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d%d%d",&L,&R,&M);
		printf("%lld\n",ans(L,R,M));
	}
	return 0;
}
