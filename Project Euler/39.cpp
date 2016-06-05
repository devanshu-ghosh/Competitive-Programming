#include<stdio.h>
//purely brute force for question 39
int bruteForced(int p)
{
	int a,b,c,d=0;
		for(b=1;b<p;b++)
		{
			for(a=1;a<b;a++)
			{
				if(p*p+2*a*b == 2*p*(a+b)) d++;
			}
		}
	return d;
}
int bruteForce(int p)
{
	int a,b,c,d=0;
	for(c=1;c<=(p/2);c++)
	{
		for(b=1;b<c;b++)
		{
			for(a=1;a<b;a++)
			{
				if(a+b+c==p) 
				{
					if(a*a + b*b == c*c) 
					{
						//printf("a=%d b=%d c=%d\n",a,b,c);
						d++;
					}
				}
			}
		}
	}
	return d;
}
int main()
{
	int p,cPrev=-1;
	for(p=10;p<=1000;p=p+2)
	{
		int c=bruteForced(p);
		if(c>cPrev)
		{
			printf("%d = %d\n",p,c);
			cPrev=c;
		}
	}
}
