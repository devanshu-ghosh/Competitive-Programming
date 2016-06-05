#include<stdio.h>
#include<math.h>
long long int A[4500];
int abso(int n)
{
	if(n<0) return n*(-1);
	else return n;
}
int isPentagonal2(int n)
{
	int i;
	for(i=1;i<5000;i++)
	{
		if(A[i]==n) return 1;
		else if(A[i]>n) break;
	}
	return 0;
}
int isInteger(double x)
{
	double y=ceil(x);
	int xx=(int)x;
	int yy=(int)y;
	if(xx==yy) return 1;
	else return 0;
}
int isPentagonalFast(int n)
{
	double x=(sqrt(24*n+1)+1)/6;
	if(isInteger(x)) return 1;
	else return 0;
}
int isPentagonal(int n)
{
	int p,i=1;
	while(1)
	{
		p=(i*(3*i-1))/2;
		if(n==p) return 1;
		else if(p>n) return 0;
		else i++;
	}
}
int main()
{
	int k,j,P1,P2;
	int i;
	/*for(i=1;i<3000;i++)
	{
		A[i]=(i*(3*i-1))/2;
	}*/
	for(k=1;k<=1500;k++)
	{
		for(j=1;j<=2500;j++)
		{
			P2=((j-k)*(3*(j+k)-1))/2;
			P2=abso(P2);
			if(isPentagonalFast(P2))//isPentagonalFast(P2))
			{
				P1=(3*(j*j+k*k)-(j+k))/2;
				if(isPentagonalFast(P1))
				printf("k:%d j:%d D:%d\n",k,j,P2);
			}
		}
	}
}
