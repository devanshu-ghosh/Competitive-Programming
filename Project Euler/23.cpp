#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int Sum(int n)
{
	int i,s=0;
	for(i=1;i<n;i++)
	{
		if(n%i==0) s=s+i;
	}
	return s;
}
int main()
{
	int abundant[28000];
	int i,j,s=0,c=0;
	for(i=1;i<=28200;i++)
	{
		if(Sum(i)>i) 
		{
			//printf("%d ",i);
			abundant[c]=i;c++;
		}
	}
	//C will come out to be the size of array.C-1 wil be last abundant no.
	int HASH[28200];
	//HASH=(int *)malloc(c*sizeof(int));
	for(i=0;i<28200;i++) HASH[i]=0;
	for(i=0;i<c;i++)
	{
		for(j=0;j<c;j++)
		{
			s=abundant[i]+abundant[j];
			if(s<=28200) HASH[s]=1;
		}
	}
	long long sum=0;
	//print the no. wich cannot be break into 2 abundant no.
	for(i=0;i<28200;i++)
	{
		if(HASH[i]==0) sum=sum+i;//printf("%d ",i);
	}
	printf("%lld",sum);
	
	
}
