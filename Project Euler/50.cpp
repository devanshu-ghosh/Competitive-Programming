#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
#define N 10000
int pr[N];
int c=0;
int isPrime(int n)
{
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
void sieve()
{
	int i;
	c=0;
	pr[c++]=2;
	for(i=3;i<N;i=i+2)
	{
		if(isPrime(i))
			pr[c++]=i;
	}
	c--;
}
int main()
{
	sieve();
	int i,j,len=0,m_len=0;
	for(i=0;i<c;i++)
	{
		int s=0;
		for(j=i;j<c;j++)
		{
			s=s+pr[j];
			if(s>(100*N))
			{
				break;
			}
			else
			{
				if(isPrime(s))
				{
					len=j-i+1;
					if(len>m_len)
					{
						m_len=len;
						cout<<s<<" "<<len<<endl;
					}
					
				}
			}
		}
	}
}
