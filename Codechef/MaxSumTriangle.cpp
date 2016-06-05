//Max sum in a triang;le
//#define N 10
#include<stdio.h>
int a[100][100];
int cache[100][100];
int N;
int MAX(int a,int b)
{
	return (a>=b)?a:b;
}
//recursive function
int Sum(int i,int j)
{
	if(i==N-1) 
	{
		cache[i][j]=a[i][j];
		return cache[i][j];
	}
	else
	{
		if(cache[i+1][j]==0) cache[i+1][j]=Sum(i+1,j);
		if(cache[i+1][j+1]==0) cache[i+1][j+1]=Sum(i+1,j+1);
		cache[i][j]=a[i][j]+MAX(cache[i+1][j],cache[i+1][j+1]);
		return cache[i][j];
	}
}
int InputAndStore()
{
	FILE *fp;int n;
	fp=fopen("D:/Code/Input/t.txt","r");
	if(fp!=NULL)
	{
		fscanf(fp,"%d",&n);
		int i,j;
		for(i=0;i<n;i++)
		{
			for(j=0;j<=i;j++)
				fscanf(fp,"%d",&a[i][j]);
		}
		return n;
	}
}
int main(void)
{
	N=InputAndStore();
	if(N==0) printf("Erroe \n");
	else
	printf("Max Sum = %d",Sum(0,0));
}
