#include<bits/stdc++.h>
using namespace std;
int main()
{
	int d,c=1;
	int k,l,m,n;
	cin>>k>>l>>m>>n>>d;
	if(k==1 || l==1 || m==1 || n==1)
	{
		cout<<d<<endl;
		return 0;
	}
	for(int i=2;i<=d;i++)
	{
		if((i%k!=0)&&(i%l!=0)&&(i%m!=0)&&(i%n!=0))
			c++;
	}
	cout<<d-c<<endl;
}
