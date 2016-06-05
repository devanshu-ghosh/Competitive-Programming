#include<iostream>
using namespace std;
int main()
{
	int N,M;
	cin>>N>>M;
	int x=0,y=0,flag=0;
	for(x=0;x<=N;x++)
	{
		for(y=0;y<=(N/2);y++)
		{
			if(((x+2*y)==N) && (x+y)%M==0)
			{
				cout<<x+y<<endl;
				flag=1;
				break;
			}
		}
		if(flag==1)
			break;
	}
	if(flag==0)
		cout<<"-1"<<endl;
}
