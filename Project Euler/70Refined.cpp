#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
#define N 10000
int pr[N];
int c=0;
int isPrime(int n)
{
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
	for(i=1001;i<N;i=i+2)
	{
		if(isPrime(i))
			pr[c++]=i;
	}
	c--;
}
//convert to string,sort it and check for equality
int isPermutation(int p,int phi)
{
	string s,r;
	while(p)
	{
		int d=p%10;
		s.push_back(char(d+'0'));
		p=p/10;
	}
	while(phi)
	{
		int d=phi%10;
		r.push_back(char(d+'0'));
		phi=phi/10;
	}
	sort(s.begin(),s.end());
	sort(r.begin(),r.end());
	if(s==r) return 1;
	else return 0;
}
int main()
{
	sieve();
	int i,j;
	int MAX=10000000;
	double min=2.0;
	for(i=0;i<c;i++)
	{
		int b=MAX/pr[i];
		for(j=0;j<c;j++)
		{
			if(pr[j]>b) break;
			else
			{
				int pdt=pr[i]*pr[j];
				int phi=(pr[i]-1)*(pr[j]-1);
				if(phi%9 == pdt%9)
				{
					if(isPermutation(pdt,phi))
					{
						double div=double(pdt)/double(phi);
						if(div<min)
						{
							min=div;
							cout<<pdt<<" "<<phi<<endl;
						}
						
					}
				}
			}
		}
	}
}
