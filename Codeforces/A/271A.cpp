#include<bits/stdc++.h>
using namespace std;
int isDistinct(int N)
{
	set<int> s;
	while(N)
	{
		s.insert(N%10);
		N=N/10;
	}
	if(s.size()==4) return 1;
	else return 0;
}
int main()
{
	int N;
	cin>>N;
	N++;
	while(!isDistinct(N))
	{
		N++;
	}
	cout<<N<<endl;
}
