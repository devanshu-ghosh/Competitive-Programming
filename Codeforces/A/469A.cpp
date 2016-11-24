#include<iostream>
#include<set>
using namespace std;
int main()
{
	int N,p,q,temp;
	cin>>N;
	set<int> s;
	cin>>p;
	while(p--)
	{
		cin>>temp;
		s.insert(temp);
	}
	cin>>q;
	while(q--)
	{
		cin>>temp;
		s.insert(temp);
	}
	if(s.size()==N)
		cout<<"I become the guy."<<endl;
	else
		cout<<"Oh, my keyboard!"<<endl;
}
