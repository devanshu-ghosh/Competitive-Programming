#include<iostream>
using namespace std;
int main()
{
	int T;
	int y1,y2,m1,m2;
	cin>>T;
	while(T--)
	{
		cin>>y1>>m1>>y2>>m2;
		y1+=y2;
		m1+=m2;
		int y=m1/12;
		m1%=12;
		if(m1==0)
		{
			y--;
			m1=12;
		}
		y1+=y;
		cout<<y1<<" "<<m1<<endl;
	}
}
