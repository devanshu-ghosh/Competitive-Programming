#include<stdio.h>
//largest pallindrome
int isPallindrome(int n)
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
int main()
{
	int a,b;
	for(a=999;a>800;a--)
	{
		for(b=999;b>800;b--)
		{
			int r=a*b;
			if(r%11==0)
			{
				if(isPallindrome(r)) printf("%d ",r);
			}
		}
	}
}
