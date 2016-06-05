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
	int T,N,K;
	cin>>T;
	while(T--)
	{
		cin>>N;
		int* A = new int[N];
		for(int i=0;i<N;i++)
			cin>>A[i];
		cin>>K;
		ll count =0;
		sort(A,A+N);
//		for(int i=0;i<N;i++)
//		{
//			cout<<A[i]<<" ";
//		}
		//cout<<endl;
		for(int i=0;i<N;i++)
		{
			if(K%A[i]==0)
			{
				int v = K/A[i];
				//now we search this value in sorted array
				int l1 = lower_bound(A+i+1,A+N,v) - A ;
				if(l1<N && A[l1]==v)//means value exists
				{
					//cout<<"L1 : "<<l1<<endl;
					int l2 = upper_bound(A+i+1,A+N,v) - A;
					//cout<<"L2 : "<<l2<<endl;
					count+= l2-l1;
				}
			}
		}
		cout<<count<<endl;
	}
	return 0;
}

