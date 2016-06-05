#include<iostream>
using namespace std;
int A[55];
int main()
{
	int T,N,i,j;
	cin>>T;
	while(T--)
	{
		cin>>N;
		for(i=0;i<N;i++)	cin>>A[i];
		int count=0;
		for(i=0;i<N;i++)
		{
			int sum=0,pdt=1;
			for(j=i;j<N;j++)
			{
				sum+=A[j];
				pdt*=A[j];
				if(sum==pdt) count++;
			}
		}
		cout<<count<<endl;
	}
}
