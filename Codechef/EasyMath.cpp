#include<stdio.h>
//easy mathematics
int factModulo(int n,int m)
{
	int i,fact=1;
	for(i=2;i<=n;i++)
	{
		fact=(fact*i)%m;
	}
	return fact;
}
//main
main()
{
	int t;
	scanf("%d",&t);
	while(t)
	{
		int n,k,a[100000];
		scanf("%d%d",&n,&k);
		int i;
		//input
		for(i=0;i<k;i++)
		{
			scanf("%d",&a[i]);
		}
		int max=a[0];
		for(i=1;i<k;i++)
		{
			if(a[i]>max) max=a[i];
		}
		printf("%d\n",factModulo(n,max));
		t--;
	}
}
