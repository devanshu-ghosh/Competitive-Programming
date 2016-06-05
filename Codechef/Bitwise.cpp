#include<stdio.h>
main()
{
	int t;
	scanf("%d",&t);
	while(t)
	{
		int i,j;
		int a[100],b[100][100];
		int n;
		scanf("%d",&n);
		//input 
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		//operating
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				b[i][j]=a[i]&a[j];
			}
		}
		/*printing
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				printf("%d ",b[i][j]);
			}
			printf("\n");
		}*/
		//finding max
		int max=-1;int posi=0,posj=0;
		for(i=0;i<n;i++)
		{
			for(j=0;j<i;j++)
			{
				if(b[i][j]>max)
				{
					max=b[i][j];
					posi=i;
					posj=j;
				}
			}
		}
		printf("%d\n",b[posi][posj]);
		t--;
	}
}

