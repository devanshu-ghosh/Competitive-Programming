#include<iostream>
using namespace std;
#define MAX 100001
int A[MAX];//all initialized to 0
int isPallin(int N)
{
	int r=0,d,M=N;
	while(N)
	{
		d=N%10;
		r=r*10+d;
		N=N/10;
	}
	return (M==r);
}
int main()
{
	//pre process
	//cummulative sum so that i can return sum faster
	int i;
	A[0]=0;
	for(i=1;i<MAX;i++)
	{
		if(isPallin(i))
		{
			A[i]=A[i-1]+i;
		}
		else
		{
			A[i]=A[i-1];
		}	
	}
	//test cases
	int T,L,R;
	cin>>T;
	while(T--)
	{
		cin>>L>>R;
		cout<<A[R]-A[L-1]<<endl;
	}
}
