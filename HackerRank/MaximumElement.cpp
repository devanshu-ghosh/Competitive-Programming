#include<iostream>
#include<stack>
using namespace std;
int main()
{
	stack< pair<int,int> > s;
	pair<int,int> p;
	int N,type,x,max;
	cin>>N;
	while(N--)
	{
		cin>>type;
		if(type==1)
		{
			cin>>x;
			if(s.empty())
				max=x;
			else
			{
				p=s.top();
				max = ((p.second>x)) ? p.second : x ;
			}	
			s.push(make_pair(x,max));
		}
			
		else if(type==2)
		{
			s.pop();
		}
		else
		{
			cout<<s.top().second<<endl;
		}
	}
}
