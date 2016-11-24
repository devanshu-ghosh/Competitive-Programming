#include<iostream>
using namespace std;
int absl(int x)
{
	return (x>0)?x:-1*x;
}
int main()
{
	int x1,x2,x3,x4,y1,y2,y3,y4;
	int side=0;
	cin>>x1>>y1>>x2>>y2;
	if(x1==x2)
	{
		side=absl(y1-y2);
		y3=y1;y4=y2;
		x3=x1+side;x4=x3;
	}
	else if(y1==y2)
	{
		side=absl(x1-x2);
		x3=x1;x4=x2;
		y3=y1+side;y4=y3;
	}
	else//diagonals
	{
		int s1=absl(x1-x2);
		int s2=absl(y1-y2);
		if(s1!=s2)
		{
			cout<<"-1"<<endl;
			return 0;
		}
		else
		{
			x3=x1;x4=x2;
			y3=y1+s1;
			y4=y2-s1;
		}
	}
	cout<<x3<<y3<<x4<<y4<<endl;
}
