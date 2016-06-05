#include<stdio.h>
#include<string.h>
int checkPallindrome(int n)
{
	int m=n,r=0;
	while(m!=0)
	{
		int d=m%10;
		r=r*10+d;
		m=m/10;
	}
	return (r==n);
}
int checkBase2Pallindrome(int n)
{
	//convert to base 2
	int i=0;char A[50];
	while(n!=0)
	{
		int d=n%2;
		A[i]=(char)(d+'0');i++;
		n=n/2;
	}
	A[i]='\0';
	char B[50];
	strcpy(B,A);
	strrev(B);
	if(strcmp(B,A)==0) 
	{
		printf("%s ",B);
		return 1;
	}
	else return 0;
}
int main()
{
	int i,s=0;
	//only odd numbers bcoz the even no cant be base 2 pallindrome bcoz they end in 1.....0 
	for(i=1;i<1000000;i=i+2)
	{
		if(checkPallindrome(i))
		{
			if(checkBase2Pallindrome(i))
			{
				s=s+i;printf("%d\n",i);
				
			} 
		}
	}
	printf("%d ",s);
}
