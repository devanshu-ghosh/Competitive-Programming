#include<iostream>
using namespace std;
int A[40000];
int main()
{
	int N,T;
	cin>>N>>T;
	for(int i=1;i<N;i++)
		cin>>A[i];
	int sum=0,flag=0;;
	for(int i=1;i<N;)
	{
		sum=A[i]+i;
		i=sum;
		if(i==T)
		{
			flag=1;
			break;
		}
		if(i>=N)
			break;
	}
	if(flag==1)
		cout<<"YES\n";
	else
		cout<<"NO\n";
}
