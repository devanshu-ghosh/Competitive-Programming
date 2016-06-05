//30
#include<stdio.h>
#include<math.h>
int main()
{
	int a[10]={0,1,2,3,4,5,6,7,8,9};
	int i,n,s=0,d;
	//initialize the array
	for(i=0;i<=9;i++)
	{
		a[i]=pow(a[i],5);
	}
	for(i=1000000;i<=10000000;i++)
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
