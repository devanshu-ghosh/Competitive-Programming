#include<iostream>
#include<cmath>
#include<vector>
#include<algorithm>
using namespace std;
//create prime list and then check if multiplying 2 primes results in an answer
//sieve of erastosthenes
#define N 9999
int prime[N];
bool a[N];
int c=0;
void sieve()
{
	int p=2,x=sqrt(N);
	while(p<=x)
	{
		int j=2;int y=p*j;
		//marking the numbers
		while((y)<= N)
		{
		 	a[y]=1;//visited
			j++;y=p*j;
		}
		//finding the next p
		p++;
		while(a[p]!=0) p++;
	}
	//printing the result
	int i;
	for(i=1000;i<=N;i++)
	{
		if(a[i]==0) prime[c++]=i;
	}
}
//convert to string,sort it and check for equality
int isPermutation(long long int p,long long int phi)
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
	//cout<<c<<endl;
	//now we brute force
	// p1*p2 will has been assumed to be the optimal structure for this problem
	// (p1-1)*(p2-1) is the phi value
	//iterating in a vector
	int i,j;
	double min=10.0;
	for(i=0;i<c;i++)
	{
		for(j=i+1;j<c;j++)
		{
			long long int p=prime[i]*prime[j]*1LL;
			long long int phi=(prime[i]-1)*(prime[i]-1);
			if(p%9 != phi%9) continue;
			if(isPermutation(p,phi))
			{
				//double div=double(p)/double(phi);
				//if(div<min)
				{
					//min=div;
					cout<<p<<endl;//" "<<prime[i]<<" "<<prime[j]<<endl;
				}
			}
			//cout<<p<<endl;
		}
	}
}
/*int prime[N+1];
void sieve()
{
    prime[0]=1;
    prime[1]=1;
    //int x=sqrt(N);
    for(long long i=2;i<=N;i++)
	{
        if(!prime[i])
		{
            prime[i]=i;
            for(long long j=2;j*i<=N;j++)
			{
                prime[j*i]=i;
            }
        }
    }
}
long long int primeFactorize(int n)
{
    long long int yy=1;
    for( ; n > 1 ; )
	{
        int p = prime[n] , e = 0 ;
        for( ; n % p == 0 ; n /= p , e++ ) ;  
        yy*= ((p-1)*(pow((double)p,e-1)));
    }
    return yy;
}
int main()
{
	sieve();
	double min=10.0;
	for(int i=N;i>700000;i--)
   {
   		int phi=primeFactorize(i);
   		if(i%9 != phi%9) continue; 
   		if(isPermutation(i,phi))
   		{
   			double div=double(i)/double(phi);
   			if(div<min)
   			{
   				cout<<i<<" "<<phi<<" "<<endl;
   				//if(i==8319823) break;
   				min=div;
   			}
   			
   		}
   }
}
*/
