#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	int N,temp;
	cin>>N;
	vector<int> v;
	long long int sum=0;
	while(N--)
	{
		cin>>temp;
		if(temp&1)
		{
			v.push_back(temp);
		}
		else
			sum+=temp;
	}
	sort(v.begin(),v.end());
	vector<int>::iterator itr=v.begin();
	if(v.size()&1)
	{
		itr++;
	}
	for(;itr!=v.end();itr++)
	{
		sum+=(*itr);
	}
	cout<<sum<<endl;
}
