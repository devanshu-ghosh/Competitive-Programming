#include<iostream>
using namespace std;
int absl(int x)
{
	return (x>0)?x:(-1*x);
}
int main()
{
	int i,j,temp,x,y;
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
		{
			cin>>temp;
			if(temp==1)
			{
				x=i;
				y=j;
			}
		}
	cout<<absl(2-x)+absl(2-y)<<endl;
}
