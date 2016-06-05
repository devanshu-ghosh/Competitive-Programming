#include<iostream>
#include<stack>
typedef long long int ll;
using namespace std;
int main()
{
	ll N,count=0,max_count=0,t;
	stack<ll> s;
	cin>>N;
	cin>>t;
	s.push(t);N--;
	while(N--)
	{
		cin>>t;
		while(!s.empty() && s.top()>t)
		{
			count++;
			s.pop();
		}
		s.push(t);
		max_count=(max_count>count)?max_count:count;
		count=0;
	}
	if(max_count==0)
		cout<<"1"<<endl;
	else
	cout<<max_count<<endl;
}
