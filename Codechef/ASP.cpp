#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
#ifdef ONLINE_JUDGE
#define gtc getchar_unlocked()
#define ptc putchar_unlocked 
#else 
#define gtc getchar()
#define ptc putchar 
#endif
int read_int()
{
	register int noRead=0,isneg=0;
	register char p=gtc;
	for(;p<48 || p>57;p=gtc){if(p=='-') isneg=1;}
	while(p>47 && p<58){ noRead = (noRead << 3) + (noRead << 1) + (p - '0');p=gtc;}
	if(isneg) noRead = -noRead;
	return noRead;
}
//inline 
void fastWrite(int a)
{
	char snum[20];
	int i=0;
	do
	{
		snum[i++]=a%10+48;
		a=a/10;
	}while(a!=0);
	i=i-1;
 
	//puts(snum);
	while(i>=0)
		ptc(snum[i--]);
	ptc('\n');
}
int A[1000005];
int main()
{
	int T,N;
	T=read_int();
	while(T--)
	{
		N=read_int();
		int i,j;
		for(i=0;i<N;i++)
			A[i]=read_int();
		//algo
		int c=0,flag=1;
		for(i=1;i<N;i++)
		{
			for(j=i-1;j>=0;j--)
			{
				if(A[i]<A[j]) 
					c++;
				else
					break;
			}
			if(c>1)
			{
				flag=0;
				break;
			}
			else c=0;
		}
		if(flag==0) puts("NO");
		else puts("YES");
	}
	return 0;
} 
