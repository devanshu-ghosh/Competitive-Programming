#include<bits/stdc++.h>
//string solution passed . now making it faster
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	int N,c=0;
	cin>>N;
	//string s;
	char a,b,d;
	while(N--)
	{
		cin>>a>>b>>d;
		if(a=='X')
		{
			if(b=='+') c++;
			else c--;
		}
		else
		{
			if(a=='+') c++;
			else c--;
		}
	}
	cout<<c<<endl;
	
}
