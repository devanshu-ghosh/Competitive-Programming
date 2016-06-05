#include<iostream>
using namespace std;
int FT[100];
int N;
void update(int index,int val)
{
	index++;
	while(index<=N)
	{
		FT[index]+=val;
		index+=((-index)&index);
	}
}
int query(int index)
{
	index++;
	int sum=0;
	while(index>0)
	{
		sum+=FT[index];
		index-=((-index)&index);
	}
	return sum;
}
int main()
{
	cin>>N;
	//we make the size of FT as MAX+1
	//here size shd be N+1 as usual
	int sum=0;
	for(int i=0;i<N;i++)
	{
		int t;
		cin>>t;
		sum+=query(t);
		update(t,1);
	}
	cout<<sum;
}
