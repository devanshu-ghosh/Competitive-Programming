#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	std::ios_base::sync_with_stdio(false);
	int T,temp;
	vector<int> v;
	cin>>T;
	int N=T;
	int* A = new int[N];
	for(int i=0;i<N;i++)
	{
		cin>>A[i];
		//v.push_back(temp);
	}
	sort(A,A+N);
	//sort(v.begin(),v.end());
	vector<int>::iterator itr;
	for(int i=0;i<N;i++)
	{
		cout<<A[i]<<endl;
	}
} 
