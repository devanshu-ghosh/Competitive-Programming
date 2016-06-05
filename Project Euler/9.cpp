#include<stdio.h>
main()
{
	int n,m,i,j;
	printf("Enter the dimensions of 2d matrix : ");
	scanf("%d%d",&n,&m);
	int r[100];
	for(i=0;i<(n*m);i++)
	{
		printf("Element at %d,%d :\n",(i-(i%m))/m,i%m);
		scanf("%d",&r[i]);
	}
	//printing the elements 
	for(i=0;i<(n*m);i++)
	{
		if(i%m==0)
		
			printf("\nROW %d :",(i-(i%m))/m);
		
		printf("%d ",r[i]);
	}
}
