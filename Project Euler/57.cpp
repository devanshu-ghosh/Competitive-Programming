#include<stdio.h>
#define MAX 1000
int N[MAX];
int D[MAX];
int N_N[MAX];
int N_D[MAX];
void den()
{
	int i,t;
	for(i=0;i<MAX;i++)
		N_D[i]=0;
	for(i=0;i<MAX;i++)
		N_D[i]=N[i]+D[i];
	//now we carry
	for(i=0;i<MAX;i++)
	{
		if(N_D[i]>9)
		{
			N_D[i+1]+=N_D[i]/10;
			N_D[i]=N_D[i]%10;
		}
	}
}
//create numerator
void num()
{
	int res[MAX],i;
	for(i=0;i<MAX;i++)
	{
		N_N[i]=0;
		res[i]=0;
	}
	//calculate 2*D in res
	for(i=0;i<MAX;i++)
		res[i]=2*D[i];
	for(i=0;i<MAX;i++)
	{
		if(res[i]>9)
		{
			res[i+1]+=res[i]/10;
			res[i]=res[i]%10;
		}
	}
	//now add it to numnerator
	for(i=0;i<MAX;i++)
		N_N[i]=N[i]+res[i];
	for(i=0;i<MAX;i++)
	{
		if(N_N[i]>9)
		{
			N_N[i+1]+=N_N[i]/10;
			N_N[i]=N_N[i]%10;
		}
	}
}
void printN()
{
	int ln=MAX-1;
	while(N[ln]==0) ln--;
	while(ln>=0)
	{
		printf("%d",N[ln]);
		ln--;
	}
	printf("\n");
}
void printD()
{
	int ln=MAX-1;
	while(D[ln]==0) ln--;
	while(ln>=0)
	{
		printf("%d",D[ln]);
		ln--;
	}
	printf("\n");
}
int main()
{
	int ln=0,ld=0,c=0,i;
	//initialize
	for(i=0;i<MAX;i++)
	{
		N[i]=0;
		D[i]=0;
		N_N[i]=0;
		N_D[i]=0;
	}
	N[0]=3;
	D[0]=2;
	for(i=1;i<=1000;i++)
	{
		//printN();printD();printf("\n");
		//find the length
		ln=MAX-1;ld=MAX-1;
		while(N[ln]==0) ln--;
		while(D[ld]==0) ld--;
		if(ln>ld)
		{
			c++;
			
		} 
		//create new N and D
		num();den();
		//copy into the arrays
		for(int j=0;j<MAX;j++)	N[j]=N_N[j];
		for(int j=0;j<MAX;j++) D[j]=N_D[j];
	}
	printf("%d",c);
}
	
