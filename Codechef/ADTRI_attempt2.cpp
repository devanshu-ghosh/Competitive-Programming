#include<iostream>
#include<math.h>
using namespace std;
long long int SQ[5000000];
int isPerfectSquare(long long int N)
{
	long long int x=(int)sqrt(N);
	return ((x*x)==N);
}
int main()
{
	int i;
	//precompute all squares
	for(i=1;i<5000000;i++)
		SQ[i]=i*i;
	int T,N,flag=0;
	cin>>T;
	while(T--)
	{
		cin>>N;
		long long int m=N*N;
		for(i=1;i<N;i++)
		{
			if(isPerfectSquare(m-SQ[i]))
			{
				flag=1;
				break;
			}
		}
		if(flag==1) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
		flag=0;
	}
}
