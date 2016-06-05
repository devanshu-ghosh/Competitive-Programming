#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int comparator(const void *a,const void *b)
{
	char *a1=(char *)a;
	char *b1=(char *)b;
	return strcmp(a1,b1);
}
int main()
{
	char string[3][5]={"anua","aasb","aab"};
	//int len=sizeof(string)/sizeof(char *);
	qsort(string[0],3,5,comparator);
	int i;
	for(i=0;i<3;i++)
	{
		printf("%s ",string[i]);
	}
}
