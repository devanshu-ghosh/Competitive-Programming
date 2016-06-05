#include<stdio.h>
#include<string.h>
int isCapital(char ch)
{
	if(ch>='A' && ch<='Z') return 1;
	else return 0;
}
int isSmall(char ch)
{
	if(ch>='a' && ch<='z') return 1;
	else return 0;
}
int isDigit(char ch)
{
	if(ch>='0' && ch<='9') return 1;
	else return 0;
}
int main()
{
	char a[120];
	gets(a);
	int len=0,c=0,s=0,d=0;
	if(strlen(a)>=5) len=1;
	if(len==0)
	{
		printf("NO\n");
	}
	else
	{
		int i;
		for(i=0;a[i]!='\0';i++)
		{
			//cheakc other parameters
			if(!c)
			{
				if(isCapital(a[i])) c=1;
			}
			if(!s)
			{
				if(isSmall(a[i])) s=1;
			}
			if(!d)
			{
				if(isDigit(a[i])) d=1;
			}
		}
		if(c&s&d) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}
