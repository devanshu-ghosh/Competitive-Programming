//stream of no.Max product
#include<stdio.h>
#include<string.h>
int main()
{
	int i=0,p=1,pPrev=1;
	//input in array 1000 digits
	int num[1005];
	//file input
	FILE *fp,*fp2;
	fp=fopen("D:/8.txt","r");
	fp2=fopen("D:/output.txt","w");
	char ch;
	ch=fgetc(fp);num[i]=ch-'0';
	while(ch!='*')
	{
		i++;
		ch=fgetc(fp);num[i]=ch-'0';
	}
	//ALGORITHM
	int len=strlen(num);
	//printf("%s\n",num);
	
}
