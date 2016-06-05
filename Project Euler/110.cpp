#include<iostream>
#include<cmath>
#include<cstdio>
#define N 100000005
using namespace std;
int prime[N+1];
void sieve()
{
    prime[0]=1;
    prime[1]=1;
    for(long long i=2;i<=N;i++)
	{
        if(!prime[i])
		{
            prime[i]=i;
            for(long long j=2;j*i<=N;j++)
                prime[j*i]=i;
        }
    }
}
long long int count_factors(long long int n)
{
    long long int yy=1;
    for( ; n>1 ;)
	{
        int p = prime[n] , e = 0 ;
        for( ; n % p == 0 ; n /= p , e++ ) ; 
        yy*=(2*e+1);
    }
    return (yy+1)/2;
}


int main()
{
   sieve();
   long long int count=0,i;
//   for(i=2;;i++)
//   {
//   		count=count_factors(i);
//   		if(count==1000)
//   		{
//   			cout<<i;
//   			break;
//   		}
//   }
	int p=100;
	for(i=1260;i<N;i++)
	{
		int count=count_factors(i);
		//cout<<count<<"  "<<i<<endl;
		if(count>=p)
		{
			cout<<count<<"  "<<i<<endl;
			p=p*10;
		}
	}
	
   
}
