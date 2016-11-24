#include<iostream>
#include<stack>
using namespace std;
int main()
{
	int N,t,i;
	int one=0,two=0,three=0;
	stack<int> s1,s2,s3;
	cin>>N;
	for(i=1;i<=N;i++)
	{
		cin>>t;
		if(t==1)
		{
			s1.push(i);
			one++;
		}
		else if(t==2)
		{
			s2.push(i);
			two++;
		}
		else
		{
			s3.push(i);
			three++;
		}
	}
	//now we decide whether we have solutions or not
	int v=(one<two)?one:two;
	int min=(v<three)?v:three;
	if(min>=1)//solution
	{
		cout<<min<<endl;
		//now we print the solutions
		while( (!s1.empty()) && (!s2.empty()) && (!s3.empty()))
		{
			cout<<s1.top()<<" "<<s2.top()<<" "<<s3.top()<<endl;
			s1.pop();s2.pop();s3.pop();
		}
	}
	else
	{
		cout<<"0";
	}
}
