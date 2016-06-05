#include<stdio.h>
//gives tle
main()
{
	int t;
	scanf("%d",&t);
	while(t)
	{
		int i,j,n;
		int a[100000];
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		int max=-1;
		for(i=0;i<n;i++)
		{
			for(j=0;j<i;j++)
			{
				int u;
				if(a[i]==(~a[j])) continue;//bcoz it will give ans 0
				else if(a[i]==a[j]) u=a[i];
				else u=a[i]&a[j];
				if(u>max)
				{
					max=u;
				}
			}
		}
		printf("%d\n",max);
		t--;
	}
}

