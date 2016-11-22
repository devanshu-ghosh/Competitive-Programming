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
	int M,N,P,i,j;
	cin>>M>>N>>P;
	if(M==1 && N==1 && P==1)
	{
		cout<<"0"<<endl;
		return 0;
	}
	unsigned int A[M+1][N+1];//nobody knows ki what has been set
	//lets set all 1 for the sake of testing
	for(i=0;i<=M;i++)
	{
		for(j=0;j<=N;j++)
		{
			A[i][j]=1;
		}
	}
	while(P--)
	{
		cin>>i>>j;
		A[i][j]=0;
	}
	//now the DP process start
	//set the first row and first column
	for(i=0;i<=M;i++)
	{
		A[0][i]=0;
		A[i][0]=0;
	}
	if(A[1][1]==0)
	{
		cout<<"0"<<endl;
		return 0;
	}
	A[0][1]=1;//just set for ans purposes
	for(i=1;i<=M;i++)
	{
		for(j=1;j<=N;j++)
		{
			if(A[i][j]!=0)
			{
				A[i][j]=((A[i][j-1]%MOD)+(A[i-1][j]%MOD))%MOD;
			}		
		}
	}
	cout<<A[M][N];
	return 0;
}

