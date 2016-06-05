#include<stdio.h>
int A[1000000];
int noOfTermsSlow(int i)
{
	int t=0;
	long long int y=i;
		while(y!=1)
		{
			if(y&1) y=y*3+1;
			else y=y/2;			
			t++;
		}
		return t;
}
int noOfTerms(long long int i)
{
		//we find it iteratively
		int t=0;
		while(i!=1)
		{
			if(i&1) i=i*3+1;
			else i=i/2;
			if(i<1000000 && A[i]!=(-1)) 
			{
				t=t+1+A[i];
				break;
			}
			else t++;
		}
		return t;
}
int main()
{
	long long int i,x;
	for(i=2;i<1000000;i++) A[i]=(-1);
	//printf("ok1\n");
	A[2]=1;
	for(i=2;i<1000000;i++)
	{
		A[i]=noOfTerms(i);
		//printf("%lld\n",i);
	}
	//printf("ok2\n");
	//printing 
	int c,cPrev=A[2];
	for(i=3;i<1000000;i++)
	{
		c=A[i];
		if(c>cPrev)
		{
			cPrev=c;
			printf("%lld == %d \n",i,A[i]);
		}
		//printf("%d == %d \n",i,A[i]);
	}
}
