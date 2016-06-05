#include<iostream>
#include<cmath>
#include<cstdio>
#define N 10000000
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
int pr[14]={2,3,5,7,11,13,17,19,23,29,31,37,41,43};
long long int count_factors(long long int n,int j)
{
	string s="";
    long long int yy=n;;
    for( ; n>1 ;)
	{
        int p = prime[n] , e = 0 ;
        if(p!=pr[j--]) return 0;
        for( ; n % p == 0 ; n /= p , e++ );
        //string temp;
        //temp.push_back(p);temp.push_back('+');temp.push_back(e);temp.push_back(' ');
        //s=s+temp;
        //cout<<p<<"^"<<e<<" ";
        //yy*=(2*e+1);
    }
    
    cout<<yy;
    cout<<endl;
    return (yy+1)/2;
}


int main()
{
   sieve();
   for(int i=8009999;i<=8099999;i=i+2)
   {
   		int j=13;
   		while(prime[i]!=pr[j])
   		{
   			if(j<0) break;
   			else j--;
   		}
   		if(j<0) continue;	
   		count_factors(i,j);
   }
}
