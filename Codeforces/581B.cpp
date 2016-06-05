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
int main()
{
	ios_base::sync_with_stdio(0);
	int N;
	cin>>N;
	int* A = new int[N];
	int* B = new int[N];
	for(int i=0;i<N;i++)
	{
		cin>>A[i];
	}
	B[N-1]=A[N-1];
	for(int i=N-2;i>=0;i--)
	{
		if(A[i]<=B[i+1])
			B[i]=B[i+1];
		else
			B[i]=A[i];
	}
	for(int i=0;i<N;i++)
	{
		if(A[i]==B[i])
			cout<<"0 ";
		else
			cout<<B[i]-A[i]+1<<" ";
	}
	return 0;
}

