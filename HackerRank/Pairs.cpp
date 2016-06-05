#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int N,K;
	cin>>N>>K;
	int* A = new int[N];
	for(int i=0;i<N;i++)
	{
		cin>>A[i];
	}
	sort(A,A+N);
	int i=0,j=N-1,diff;
	long long int count=0;
	for(i=0;i<N;i++)
	{
		for(j=i+1;j<N;j++)
		{
			diff=A[j]-A[i];
			if(diff==K)
			{
				count++;
				break;
			}
			else if(diff>K)
				break;
		}
	}
	cout<<count<<endl;
}

