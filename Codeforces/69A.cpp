#include<iostream>
using namespace std;
int main()
{
	std::ios_base::sync_with_stdio(false);
	int N,x,y,z,xx=0,yy=0,zz=0;
	cin>>N;
	while(N--)
	{
		cin>>x>>y>>z;
		xx+=x;yy+=y;zz+=z;
	}
	if(xx==0 && yy==0 && zz==0)
		cout<<"YES\n";
	else
		cout<<"NO\n";
}
