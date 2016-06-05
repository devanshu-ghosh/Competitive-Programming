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
int A[100005];
int main()
{
	ios_base::sync_with_stdio(0);
	int N,M,l,r;
	cin>>N>>M;
	while(M--)
	{
		cin>>l>>r;
		l--;r--;
		A[l]++;
		A[r+1]--;
	}
	for(int i=1;i<N;i++)
	{
		A[i]+=A[i-1];
	}
	sort(A,A+N);
	//for(int i=1;i<=N;i++)
	//	cout<<A[i]<<" ";
	//cout<<endl;
	int index=(N)/2;
	//cout<<index<<endl;
	cout<<A[index]<<endl;
	return 0;
}

