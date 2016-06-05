#include<stdio.h>
//sum of all amicable numbers less than 10000
int D(int n)
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
	int Dlist[10001];
	int i;
	for(i=1;i<10000;i++)
	{
		Dlist[i]=D(i);
	}
	//check and sum
	int S=0;
	for(i=1;i<=10000;i++)
	{
		if(Dlist[i]>10000) continue;//bcoz the bound is 10000.We will arrayOutOfBounds 
		//else
		{
			if(i==Dlist[Dlist[i]]) 
			{
				if(i!=Dlist[i])
				printf("%d ",i);
				//S=S+i;
			}
		}
	}
	printf("%d",S);
}
