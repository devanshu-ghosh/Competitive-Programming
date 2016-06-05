#include<iostream>
using namespace std;
int isInt(double s)
{
	int t=(int)s;
	if((s-t)>0)
	return 0;
	else return 1;
}
int main()
{
	int i;
	int k;
	for(i=5;i<=1000;i++)
	{
		int s=i*i;
		double ans=i*((s+16)*(1.0)/(s-16));
		if(isInt(ans))cout<<i<<" "<<ans<<endl;
	}
}
