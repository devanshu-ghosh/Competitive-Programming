#include<bits/stdc++.h>
using namespace std;
int A[101];
int sum[101];
bool cmp(int i,int j)
{
	return (i>j);
}
int main()
{
	int N;int temp,i;
	cin>>N;
	for(i=0;i<N;i++)
		cin>>A[i];
	if(N==1)
	{
		cout<<"1"<<endl;
		return 0;
	}
	sort(A,A+N,cmp);
	sum[0]=A[0];
	for(i=1;i<N;i++)
	{
		sum[i]=sum[i-1]+A[i];
	}
	//for(i=0;i<N;i++)
	//	cout<<sum[i]<<" ";
	cout<<endl;
	//algo
	int sum_right=0,sum_left=0;
//	for(i=0;i<N;i++)
//		cout<<sum[i]<<" ";
	for(i=0;i<N;i++)
	{
		sum_left=sum[i];
		if(i==0) sum_right=sum[N-1]-sum[0];
		else	sum_right=sum[N-1]-sum[i];
		//cout<<"SL : "<<sum_left<<" SR: "<<sum_right<<endl;
		if(sum_left>sum_right) break;
	}
	cout<<i+1<<endl;
}
