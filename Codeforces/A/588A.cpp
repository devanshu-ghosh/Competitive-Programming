#include<iostream>
using namespace std;
int main()
{
	int N,i;
	cin>>N;
	int *A = new int [N];
	int *P = new int [N];
	for(i=0;i<N;i++)
		cin>>A[i]>>P[i];
	//find the min p , the first min if duplicates exist
	int min=P[0];
	for(i=1;i<N;i++)
	{
		if(P[i]<min)
			min=P[i];
		else
			P[i]=min;
	}
	//sum up
	long long int sum=0;
	for(i=0;i<N;i++)
		sum+=A[i]*P[i]*1LL;
	cout<<sum<<endl;
}
