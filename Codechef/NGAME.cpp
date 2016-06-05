#include<stdio.h>
int main()
{
	int T,N;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d",&N);
		if(N%4==0) printf("Second\n");
		else printf("First\n");
	}
	return 0;
}
