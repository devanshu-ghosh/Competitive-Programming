//print all luccky numbers
#include<iostream>
#include<algorithm>
#include<queue>
#include<string>
using namespace std;
int main()
{
	queue<long long int> q;
	q.push(1);
	q.push(2);
	int n,t;
	cin>>n;
	while(n--)
	{
		cout<<q.front()<<endl;
		t=q.front();
		q.pop();
		q.push(t*10+1);
		q.push(t*10+2);
	}
	return 0;
}
