//30
#include<stdio.h>
#include<math.h>
int main()
{
	int a[10]={1,1,2,6,24,120,720,5040,40320,362880};
	int i,n,s=0,d;
	for(i=10000;i<=100000000;i++)
	{
		n=i;s=0;
		while(n!=0)
		{
			d=n%10;
			s=s+a[d];
			n=n/10;
		}
		if(s==i) printf("%d ",i);
	}
}
