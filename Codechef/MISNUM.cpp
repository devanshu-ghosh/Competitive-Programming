#include<iostream>
#include<math.h>
using namespace std;
int A[3500];
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
	A[1]=4;
	int c=2;
	int i;
	for(i=3;i<=31607;i=i+2)
	{
		if(isPrime(i))
		{
			 A[c]=i*i;
			 c++;
		}
	}
}
int main()
{
	sieve();A[0]=0;
	int Q;
	long long int L,R,i;
	cin>>Q;
	while(Q--)
	{
		cin>>L>>R;
		//just greater than equal to l
		for(i=1;i<=3401;i++)
		{
			if(A[i]>=L) break;
		}
		L=i;
		for(i=3401;i>=1;--i)
		{
			if(A[i]<=R)
			{
				break;
			} 
		}
		R=i;
		if(R<L) cout<<"0"<<endl;
		else cout<<(R-L+1)<<endl;
	}
}
