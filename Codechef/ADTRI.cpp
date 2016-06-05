#include<stdio.h>
#include<math.h>
long long int SQ[10005];
int isPerfectSquare(long long int N)
{
	long long int x=(int)sqrt(N);
	return ((x*x)==N);
}
int check(long long int N,long long int K)
{
	int flag=0,i,x;
	if(N%K!=0) return 0;
	x=(int)sqrt(N/(2.0*K));
	N=N/K;
	for(i=1;i<=x;i++)
	{
		if(isPerfectSquare(N*N-SQ[i]))
		{
			flag=1;break;
		}
		else flag=0;
	}
	return flag;
}
int main()
{
	long long int T,N;
	int flag=0,i,x,k;
	scanf("%lld",&T);
	//square array
	for(i=1;i<=10000;i++)
		SQ[i]=i*i;
	while(T--)
	{
		scanf("%lld",&N);
		x=(int)sqrt(N);
		for(k=1;k<=x;k++)
		{
			if(check(N,k))
			{
				flag=1;
				break;
			}
		}
		if(flag==1) printf("YES\n");
		else printf("NO\n");
		flag=0;
	}
	return 0;
}
