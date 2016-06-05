#include<stdio.h>
struct b
{
	int winner;
	int lead;
};
int main(void)
{
	int t,i=0;
	scanf("%d",&t);
	//input Arrays
	int p1[10001],p2[10001];
	struct b e[10001];
	int max=-320000000,w;
	while(t--)//input And calculate lead
	{
		scanf("%d%d",&p1[i],&p2[i]);
		int le=p1[i]-p2[i];
		if(le>0)
		{
			e[i].lead=le;
			e[i].winner=1;
		}
		else
		{
			e[i].lead=(le*(-1));
			e[i].winner=2;
		}
		if(e[i].lead>max)
		{
		 	max=e[i].lead;
			w=e[i].winner;
		}
		i++;
	}
	printf("%d %d",w,max);
	
}
