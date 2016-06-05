//program to add large numbers
#include<stdio.h>
#include<string.h>
char n1[100],n2[100];
int res[100];
int inputAndStore(char n1[],char n2[])
{
	//input
	printf("Enter the 1st number : ");
	gets(n1);
	printf("Enter the 2nd number : ");
	gets(n2);
	//reversing the input for addition
	strrev(n1);
	strrev(n2);
	//adding zeroes in front of the numbers
	int i;
	int max=(strlen(n1)>=strlen(n2))?strlen(n1):strlen(n2);
	//initialising
	for(i=strlen(n1);i<max;i++) n1[i]='0';
	for(i=strlen(n2);i<max;i++) n2[i]='0';
	for(i=0;i<100;i++) res[i]=0;
	return max;
}
void add(char n1[],char n2[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		int t=(n1[i]-'0')+(n2[i]-'0');
		res[i]=t;
	}
	//carry operation
	for (i = 0; i < n+1; i++)
	{
		if (res[i] > 9)
		{
			res[i + 1] += res[i] / 10;
			res[i] = res[i] % 10;
		}
	}
}
main()
{
	int max=inputAndStore(n1,n2);
	int i;
	add(n1,n2,max);
	i=max+1;
	while(res[i]==0) i--;//to skip the front zeroes
	//printing
	for(;i>=0;i--) printf("%d",res[i]);

}

