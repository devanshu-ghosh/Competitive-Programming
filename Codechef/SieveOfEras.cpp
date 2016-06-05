//sieve of erastosthenes
//index is the number represented
//0 means not visited
//1 means visited
//initialise
//long long i,n=10000001;
//algo runs till p< sqrt(n)
#include<stdio.h>
#include<math.h>
#define N 10000001
bool a[N];
main()
{
	int p=2,x=sqrt(N);
	while(p<=x)
	{
		int j=2;int y=p*j;
		//marking the numbers
		while((y)<= N)
		{
		 	a[y]=1;//visited
			j++;y=p*j;
		}
		//finding the next p
		p++;
		while(a[p]!=0) p++;
	}
	//printing the result
	int c=0;
	int i;
	for(i=2;i<=N;i++)
	{
		if(a[i]==0) c++; //printf("%d\n",i);
	}
	printf("%d",c);
}
