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
inline int cs(int x)
{
	return (x>0)?1:0;
}
int A[100010],ans[100010];
int main()
{
	ios_base::sync_with_stdio(0);
	int T,N;
	cin>>T;
	while(T--)
	{
		cin>>N;
		if(N==1)
		{
			int temp;
			cin>>temp;
			cout<<"1\n";
			continue;
		}
		ans[N-1]=1;
		for(int i=0;i<N;i++)
			cin>>A[i];
		for(int i=N-2;i>=0;i--)
		{
			if(cs(A[i])==cs(A[i+1]))
				ans[i]=1;
			else
				ans[i]=ans[i+1]+1;
		}
		for(int i=0;i<N;i++)
			cout<<ans[i]<<" ";
		cout<<endl;
	}
	return 0;
}

