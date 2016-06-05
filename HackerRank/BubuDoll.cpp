#include<iostream>
using namespace std;
int main()
{
	std::ios_base::sync_with_stdio(false);
	int T;
	cin>>T;
	long long int N,A,D,temp,sum=0,sum2=0;
	while(T--)
	{
		cin>>N>>A>>D;
		for(int i=0;i<N;i++)
		{
			cin>>temp;
			sum+=temp;
		}
		sum2 = (N)*(1LL)*(2*A + D*(N-1));
		sum2/=2;
		sum2-=sum;
		cout<<sum2<<endl;
	}
}
