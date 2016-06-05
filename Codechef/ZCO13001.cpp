#include<iostream>
#include<algorithm>
using namespace std;
long long int absl(long long int x)
{
	return (x>0)?x:(x*-1);
}
int cmp(int P,int Q)
{
	return P>Q;
}
int main()
{
	int N;
	cin>>N;
	int* A = new int[N];
	int* SUM = new int[N];
	for(int i=0;i<N;i++)
		cin>>A[i];
	//sum
	if(N==2)
	{
		cout<<absl(A[1]-A[0])<<endl;
		return 0;
	}
	sort(A,A+N,cmp);
	SUM[N-1]=A[N-1];
	for(int i=N-2;i>=0;i--)
		SUM[i]=A[i]+SUM[i+1];
	long long int ans=0,temp=0;
	for(int i=1;i<N;i++)
	{
		temp= SUM[i] - (N-i)*A[i-1];
		temp=absl(temp);
		ans+=temp;
	}
	cout<<ans<<endl;
}
