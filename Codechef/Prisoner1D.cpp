#include<stdio.h>
int c=0;int k=2,n=5;
int f(int index)
{
	int i=0;
	if(index>n) 
	{
		return 0;
	}
	if(index==n) printf("\n");
	for(i=1;i<=k;i++)
	{
		index=index+i;
		if(!f(index))
		{
			printf("%d ",i);c++;
		} 
	}
	return c;
}
main()
{
	printf("\n\n%d\n",f(0));
}
