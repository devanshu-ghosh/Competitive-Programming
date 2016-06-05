//remove numbers
//not able to take last input
#include<stdio.h>
main()
{
	int t;
	FILE *fp;
	fp=fopen("D:/Code/C/CODECHEF/StringVsInteger.txt","r");
	fscanf(fp,"%d",&t);
	fflush(stdin);
	while(t)
	{
		char ch[10000];
		char u;int x=0;
		u=fgetc(fp);
		while(u!='\n') { ch[x]=u;u=fgetc(fp);x++;}
		ch[x]='\0';
		//fscanf(fp,"%s",&ch);
		int i;
		for(i=0;ch[i]!='\0';i++)
		{
			if(ch[i]>='0' && ch[i]<='9') continue;
			else printf("%c",ch[i]);
		}
		printf("\n");
		t--;
	}
}
