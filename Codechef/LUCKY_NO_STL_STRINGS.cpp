//print all luccky numbers
#include<iostream>
#include<algorithm>
#include<queue>
#include<string>
using namespace std;
int main()
{
	queue<string> q;
	q.push("4");
	q.push("7");
	int n=10;
	string temp;
	//cin>>n;
	while(n--)
	{
		cout<<q.front()<<endl;
		temp=q.front();
		q.pop();
		q.push(temp+"4");
		q.push(temp+"7");
	}
	return 0;
}
