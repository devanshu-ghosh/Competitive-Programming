//program to add large numbers
//we neeed to print the fib numbers . so there is no need of input
//we can do things by an integer a
#include<stdio.h>
#include<string.h>
//global arrays 
char n1[1000],n2[1000],res[1000];
//input and store function
int inputAndStore(char n1[],char n2[])
{
	int i;
	printf("Enter the 1st number : ");
	gets(n1);
	printf("Enter the 2nd number : ");
	gets(n2);
	//reversing the input for addition
	strrev(n1);
	strrev(n2);
	//adding zeroes in front of the numbers
	for(i=0;i<100;i++) res[i]='0';
	
	int len1=strlen(n1);
	int len2=strlen(n2);
	if(len1>len2)
	{
		for(i=len2;i<len1;i++) n2[i]='0';
		n2[i]='\0';
		return len1;
	}
	else
	{
		for(i=len1;i<len2;i++) n1[i]='0';
		n1[i]='\0';
		return len2;

	}
	//for(i=strlen(n1);i<1000;i++) n1[i]='0';
	//for(i=strlen(n2);i<1000;i++) n2[i]='0';
}
//adding the two char arrays
void add(char n1[],char n2[],int n)
{
	int i;
	//adding and carrying
	for(i=0;i<=n;i++)//there is some waste bcoz i am adding all the indexes which is not needed
	{
		int t=(n1[i]-'0')+(n2[i]-'0');
		if(t<10)
		{
			int u=res[i]-'0';//adding in int and saving in char
			u=u+t+'0';
			res[i]=u;
		}
		else //carry
		{
			res[i+1]=(char)((t/10)+'0');
			res[i]=(char)((t%10)+'0');
		}
	}
	//returns the number of digits in the number
	//while(res[i]=='0') i--;//to skip the front zeroes
	//return i;
}
void print(char res[],int i)//i is the number of digits
{
	//printing
	//if(res[i]=='0') i--;
	for(;i>=0;i--) printf("%c",res[i]);
}
main()
{
	int n=inputAndStore(n1,n2);
	int digits;
	add(n1,n2,n);
	print(res,n);
	
}

