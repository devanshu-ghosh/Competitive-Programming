#include<iostream>
#include<string>
#include<stack>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		string s,t;
		cin>>s;
		cin>>t;
		stack<char> s1,t1;
		s1.push('*');
		t1.push('*');
		for(int i=0;i<s.length();i++)
		{
			char ch=s.at(i);
			if(ch!=s1.top())
				s1.push(ch);
		}
		for(int i=0;i<t.length();i++)
		{
			char ch=t.at(i);
			if(ch!=t1.top())
				t1.push(ch);
		}
		//now we create the string
		string s2,t2;
		while(!s1.empty())
		{
			s2=s1.top()+s2;;
			s1.pop();
		}	
		while(!t1.empty())
		{
			t2=t1.top()+t2;
			t1.pop();
		}
		if(s2==t2)	cout<<"Yes"<<endl;
		else cout<<"No"<<endl;	
	}
}
