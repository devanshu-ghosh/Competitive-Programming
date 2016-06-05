#include<stdio.h>
#include<string.h>
int o; int cr[100];
void reverse(char *x,int n)
{
	int first=0;
	int last=n-1;
	char swap;
	while(first!=last)
	{
		swap=x[first];
		x[first]=x[last];
		x[last]=swap;
		first++;
		if(first==last)
		break;
		last--;
	}
}
void sum(char *ar,char *br,int n)
{
	int a,x,y,b,c=0,i;
	for(i=0;i<n;i++)
	{
		x=ar[i]-'0';
		y=br[i]-'0'; 
		a=x+y;
		b=a+c;
		cr[i]=(b)%10;
		c=b/10;
	}
	if(b>9)
	{
		cr[i]=1;
		o=i;
	}
	else
	{
		o=i-1;	
	}
}
main()
{
	int l1,l2; char ar[100],br[100];
	int i,k;
	gets(ar);
	gets(br);
	l1=strlen(ar);
	l2=strlen(br);
	reverse(ar,l1);
	reverse(br,l2);
	if(l1>l2)
	{
	for(k=l2;k<l1;k++)
	br[k]='0';
    sum(ar,br,l1);
	}
	else
	{
		for(k=l1;k<l2;k++)
		ar[k]='02';	
		sum(ar,br,l2);
	}
	for(i=o;i>=0;i--)
	{
		printf("%d",cr[i]);
	}
}

