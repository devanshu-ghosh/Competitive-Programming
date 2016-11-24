#include<iostream>
using namespace std;
int main()
{
	long long int N;
	cin>>N;
	if(N&1)//odd
	{
		cout<<(-1)*((N+1)/2);
	}
	else
		cout<<N/2;
}
