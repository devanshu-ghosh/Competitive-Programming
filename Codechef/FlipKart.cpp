#include<stdio.h>
int N;
int ans(int pr_index,int step)
{
	if(pr_index==N)
		return 1;
	else if(pr_index>N) return 0;
	else
		return ans(pr_index+step,step+1)||ans(pr_index-step,step+1);
}
int main()
{
	N=10;
	printf("%d\n",ans(0,0));
}
