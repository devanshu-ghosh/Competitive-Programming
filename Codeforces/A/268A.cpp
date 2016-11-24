#include<iostream>
using namespace std;
class node
{
	public :
		int h,a;
	node()
	{
		h=0;a=0;
	}
};
int main()
{
	int N;
	cin>>N;
	node *p = new node [N];
	int i,j,count=0;
	for(i=0;i<N;i++)
		cin>>p[i].h>>p[i].a;
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			if(i!=j)
			{
				if(p[i].h==p[j].a)
					count++;
			}
		}
	}
	cout<<count<<endl;
}
