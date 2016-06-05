#include<stdio.h>
typedef struct element
{
	int coeff;
	int index;
}poly;
main()
{
	//declaring the polynomal arrays
	poly p1[20],p2[20],res[40];
	//input and store
	printf("Enter the number of elements in POLY 1 : ");
	int n;
	scanf("%d",&n);
	printf("Enter the number of elements in POLY 2 : ");
	int m;
	scanf("%d",&m);
	int i,j,k;
	//input for 1st polynomial
	printf("POLY 1 \n");
	for(i=0;i<n;i++)
	{
		printf("Coeff : ");
		scanf("%d",&p1[i].coeff);
		printf("Index : ");
		scanf("%d",&p1[i].index);
	}
	printf("POLY 2 \n");
	//input for 2nd polynomial
	for(i=0;i<m;i++)
	{
		printf("Coeff : ");
		scanf("%d",&p2[i].coeff);
		printf("Index : ");
		scanf("%d",&p2[i].index);
	}
	//multiply
	int r[100];
	//initislise the result array
	for(i=0;i<100;i++) r[i]=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			r[p1[i].index+p2[j].index]+=p1[i].coeff*p2[j].coeff;
		}
	}
	//printing
	printf("POLY 1 \n");
	for(i=0;i<(n);i++)
	{
		printf("%dx^%d+",p1[i].coeff,p1[i].index);
	}
	printf("\b \n");
	printf("POLY 2 \n");
	for(i=0;i<(m);i++)
	{
		printf("%dx^%d+",p2[i].coeff,p2[i].index);
	}
	printf("\b \n");
	printf("Result : ");	
	for(i=0;i<(100);i++)
	{
		if(r[i]!=0)
		printf("%dx^%d+",r[i],i);
	}
	printf("\b ");
}
