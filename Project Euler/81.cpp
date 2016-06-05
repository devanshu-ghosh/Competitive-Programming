#include<iostream>
using namespace std;
int A[180][180];
int main()
{
	long long int sum=0,i,j;
	int N=80;char temp;
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			cin>>A[i][j];
			cin>>temp;
		}
	}
	i=N-1;j=N-1;
	//input
	sum+=A[i][j];
	while((i!=0) && (j!=0))
	{
		if(A[i][j-1]<=A[i-1][j])//go left
		{
			j--;
			sum+=A[i][j];
			//cout<<A[i][j]<<endl;
		}
		else
		{
			i--;
			sum+=A[i][j];
			//cout<<A[i][j]<<endl;
		}
	}
	//cout<<"*"<<endl;
	while(i>0)
	{
		i--;
		sum+=A[i][j];
	}
	while(j>0)
	{
		j--;
		sum+=A[i][j];
	}
	cout<<sum<<endl;
}
