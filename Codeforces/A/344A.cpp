#include<iostream>
using namespace std;
int main()
{
	string curr="",prev="";
	int N,c=1;
	cin>>N;
	cin>>prev;N--;
	while(N--)
	{
		cin>>curr;
		if(curr!=prev)
			c++;
		prev=curr;
	}
	cout<<c<<endl;
}
