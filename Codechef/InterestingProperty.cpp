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
	int N,temp;
	cin>>N;
	int* A = new int[N];
	cin>>A[0];
	for(int i=1;i<N;i++)
	{
		cin>>A[i];
		A[i]=A[i]^A[i-1];
	}
	for(int i=0;i<N;i++)
		cout<<A[i]<<" ";
	cout<<endl;
	int Q,l,r;
	cin>>Q;
	while(Q--)
	{
		cin>>l>>r;
		int ans = (l!=0)?(A[r]^A[l-1]):(A[r]);
		cout<<ans<<endl;
	}
}

