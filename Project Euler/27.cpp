//prime test
#include<stdio.h>
#include<math.h>
int isPrime(int n)
{
	if(n<0) return 0;
	if(n==2) return 1;
	if(!(n&1)) return 0;
	int i,flag=1,x=sqrt(n);
	for(i=3;i<=x;i=i+2)
	{
		if(n%i==0)
		{
			flag=0;break;
		}
	}
	return flag;
}
int main()
{
	int a,b,n,cPrev=-1,c=0;int result;
	for(a=-1000;a<=1000;a++)
	{
		for(b=-1000;b<=1000;b++)
		{
			n=0;c=0;
			int z=n*(a+n)+b;
			while(isPrime(z))
			{
				n++;c++;z=n*(a+n)+b;
			}
			//printf("a:%d b:%d c:%d \n",a,b,c);
			if(c>cPrev) 
			{
				cPrev=c;result=a*b;printf("res:%d a:%d b:%d c:%d \n",a*b,a,b,c);
			}
		}
	}
}
