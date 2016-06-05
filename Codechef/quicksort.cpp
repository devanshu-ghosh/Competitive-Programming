//quick sort function in c
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int compared(const void *a,const void *b)
{
	int num_a=*(int *)a;
	int num_b=*(int *)b;
	return num_a-num_b;
}
int comparedChar(const void *a,const void *b)
{
	char num_a=*(char *)a;
	char num_b=*(char *)b;
	return (int)(num_a-num_b);
}
int main()
{
	char A[20];
	int n;
	//printf("Enter the no. of elements : ");
	//scanf("%d",&n);
	printf("Enter the string : ");
	scanf("%s",&A);
	n=strlen(A);
	int i;
	/*for(i=0;i<n;i++)
	{
		scanf("%c",&A[i]);
	}*/
	qsort(A,n,sizeof(char),comparedChar);
	for(i=0;i<n;i++)
	{
		printf("%c ",A[i]);
	}
}
