#include<bits/stdc++.h>
using namespace std;
int A[]={4,7,44,47,74,77,444,447,474,477,744,747,774,777};
int main()
{
	int N;
	cin>>N;
	int flag=0;
	for(int i=0;i<14;i++)
	{
		if(N%A[i]==0)
		{
			flag=1;
			break;
		}
	}
	if(flag)	cout<<"YES\n";
	else	cout<<"NO\n";
}
