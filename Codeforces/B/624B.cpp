#include<iostream>
#include<algorithm>
#include<set>
using namespace std;
int cmp(int P,int Q)
{
	return (P>=Q);
}
int main()
{
	int N,temp;
	cin>>N;
	set<int> s;
	set<int>::iterator itr=s.begin();
	for(int i=0;i<N;i++)
	{
		cin>>temp;
		while(s.find(temp)!=s.end())
			temp--;
		s.insert(temp);
	}
	long long int sum=0;
	for(itr=s.begin();itr!=s.end();itr++)
	{
		if( *itr > 0)
			sum+=(*itr);
	}
	cout<<sum<<endl;
}
