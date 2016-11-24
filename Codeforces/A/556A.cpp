#include<iostream>
#include<stack>
using namespace std;
int main()
{
	int N;
	char t;
	cin>>N;
	stack<char> s;
	for(int i=0;i<N;i++)
	{
		cin>>t;
		if(s.empty())
			s.push(t);
		else if(s.top()==t)
			s.push(t);
		else
			s.pop();		
	}
	cout<<s.size()<<endl;
}
