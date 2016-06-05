#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int comparedChar(const void *a,const void *b)
{
	char num_a=*(char *)a;
	char num_b=*(char *)b;
	return (int)(num_b-num_a);
}
long long int a=0,b=0;
int main()
{
	int T;
	FILE *fp,*fpo;char NUM[20];
	fp=fopen("D:/a2.in","r");
	fpo=fopen("D:/output2.txt","w");
	if(fp==NULL) printf("Error\n");
	else
	{
		fscanf(fp,"%d",&T);
		while(T--)
		{
			fscanf(fp,"%s",&NUM);
			//SORT FUN
			int len=strlen(NUM);
			qsort(NUM,len,sizeof(char),comparedChar);
			//fprintf(fpo,"%s ",NUM);
			//CREATE NUM
			int i;
			for(i=0;i<(len-1);i++)
			{
				a=a*10+(NUM[i]-'0');
			}
			b=NUM[len-1]-'0';
			a=a+b;
			fprintf(fpo,"%lld\n",a);
			a=0;
			//fgets(NUM,3,fp);
		}
	}
}
