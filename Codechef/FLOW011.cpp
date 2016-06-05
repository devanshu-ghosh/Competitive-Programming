#include<iostream>
using namespace std;
int main()
{
	int sal;
	double hra,da;
	int T;
	cin>>T;
	while(T--)
	{
		cin>>sal;
		if(sal<1500)
		{
			hra=(0.1)*(sal);
			da=(0.9)*sal;
		}
		else
		{
			hra=500;
			da=(0.98)*sal;
		}
		cout<<(sal+hra+da)<<endl;
	}
}
