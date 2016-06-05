#include<iostream>
#include<cstdio>
using namespace std;
int A[100005];
int main()
{
	int N;
	long long int c=0,sum=0;
	cin>>N;
	int i,j;
	for(i=0;i<N;i++)
		cin>>A[i];
	for(i=N-2;i>=0;i--)
	{
		for(j=i+1;j<N;j++)
		{
			if(A[j]<A[i]) c++;
		}
		sum+=c;
		c=0;
	}
	cout<<sum<<endl;
	return 0;
}
