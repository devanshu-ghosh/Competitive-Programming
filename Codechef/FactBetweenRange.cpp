#include<iostream>
using namespace std;
int main()
{
	cout<<"Enter l and r : ";
	long long int l,r;
	cin>>l>>r;
	long long fact=1;
	int i=1;
	while(fact<l)
	{
		fact*=i;
		i++;
	}
	//cout<<i<<endl;
	if(i==1) i++;
	while(fact<=r)
	{
		cout<<fact<<endl;
		fact*=i;
		i++;
	}
	return 0;
}
