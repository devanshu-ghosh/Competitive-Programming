#include<iostream>
#include<math.h>
//100^100 gives ans = 0 
// if there is a zero then it is not printed 
//03454 is printed 3454
using namespace std;
long long int ModExpSuperFast(long long int base,long long int index,long long int m)
{
	long long int y=1;
	while(index)
	{
		if(index&1)//if odd
			y=((y%m)*(base%m))%m;
		index=index>>1;
		//base=(base*base)%m;
		base=((base%m)*(base%m))%m;
	}
	return y;
}
int main()
{
	long long int T,N,K;
	cin>>T;
	while(T--)
	{
		cin>>N>>K;
		K=(long long int)pow(10,K);
		cout<<ModExpSuperFast(N,N,K)<<endl;
	}
	return 0;
}
