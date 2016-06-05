#include<iostream>
#include<cmath>
using namespace std;
int sq[1005];//stores squares
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
int main()
{
	int i,flag=0;
	for(i=0;i<1005;i++) sq[i]=i*i;
	for(i=3;i<100000;i=i+2)
	{
		if(!isPrime(i))
		{
			flag=0;
			for(int u=1;u<sqrt(i/2);u++)
			{
				if(isPrime(i-2*sq[u]))
				{
					flag=1;
					break;
				}
			}
			if(flag==0)
			{
				cout<<i<<endl;
				//break;
			}
		}
	}
}

