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
int A[100005],B[100005];
class node
{
	public:
		int a;int b;
};
node C[100005];
int cmpBD(node P,node Q)
{
	return (P.b>Q.b);
}
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	int T,N,K;
	cin>>T;
	while(T--)
	{
		cin>>N>>K;
		ll sum=0;
		for(int i=0;i<N;i++)
			cin>>A[i];
		for(int i=0;i<N;i++)
		{
			cin>>B[i];
			sum+= A[i]*B[i]*(1LL);
		}
		if(K==0)
		{
			cout<<sum<<endl;
			continue;
		}
		//just find the max B here
		int bmax=0;
		int index=0;
		for(int i=0;i<N;i++)
		{
			if((A[i]>0 && B[i]>0) || (A[i]<0 && B[i]<0))
			{
				int t = abs(B[i]);
				if(t>bmax)
					bmax=t;
			}
			else
			{
				C[index].a = abs(A[i]);
				C[index].b = abs(B[i]);
				index++;
			}	
		}
		if(index==0)
		{
			cout<<sum+(bmax*K*1LL)<<endl;
			continue;
		}
		sort(C,C+index,cmpBD);
		ll s=0,c1=bmax*K*1LL;
		for(int i=0;i<index;i++)
		{
			if(K > C[i].a)
			{
				s+= (C[i].a)*(C[i].b)*1LL;
				K = K - C[i].a;
			}
			else
			{
				s+= K * C[i].b * 1LL;
				break;
			}
		}
		//now we have 2 options
		//either take s or c1 = bmax*K
		if(s>c1)
		{
			cout<<sum+s<<endl;
		}
		else
		{
			cout<<sum+c1<<endl;
		}
	}
	return 0;
}

