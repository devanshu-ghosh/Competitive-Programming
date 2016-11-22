#include <iostream>
#include <sstream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <cctype>
#include <string>
#include <vector>
#include <list>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <algorithm>
#define MOD 1000000007
typedef long long int ll;
using namespace std;
int maxi;
int state(vector<int> A , vector<int> ans , int index)
{
	if(index == A.size())
	{
		//means we have come to the end and we need to return the size of array
		return ans.size();
	}
	else
	{
		//we are at index and either we include the element or not
		//Step 1 include it
		int yes,no;
		if(A[index]>ans[ans.size()-1])
		{
			//means we can include this in the answer array
			ans.push_back(A[index]);
			yes = state(A,ans,index+1);
		}
		else
		{
			//we dont inlcude this element and recurese
			no = state(A,ans,index+1);
		}
		return (yes>no)?yes:no;
	}
}
void Sstate(vector<int> &A , vector<int> ans , int index)
{
	if(index == A.size())
	{
		//means we have come to the end and we need to return the size of array
		if(maxi < ans.size() )
			maxi=ans.size();
	}
	else
	{
		//we are at index and either we include the element or not
		//Step 1 include it
		if(A[index]>ans[ans.size()-1])
		{
			Sstate(A,ans,index+1);
			ans.push_back(A[index]);
			Sstate(A,ans,index+1);
		}
		else
		{
			Sstate(A,ans,index+1);
		}
	}
}
int main()
{
	ios_base::sync_with_stdio(0);
	vector<int> A,ans;
	int index=0;
	ans.clear();
	ans.push_back(-100);//sentinel value
	int N,t;
	cin>>N;
	while(N--)
	{
		cin>>t;
		A.push_back(t);
	}
	maxi=0;
	Sstate(A,ans,0);
	cout<<maxi-1<<endl;
	return 0;
}

