#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	double d=sqrt(b*b*1.0000 - 4*a*c*1.0000);
	double x=(-b+d)/(2.00000*a);
	cout.precision(7);
	cout<<x<<endl;
}
