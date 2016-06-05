#include<iostream>
//yes cases 
//0 0 3 2 , 0 0 1 6 , 0 0 2 4
//what was wrong ki i was not checking the condition for every step .
//always try to check if the conditon are met for all points and not only end points
using namespace std;
long long int A[1000005];
int main()
{
	int T,K,i,flag=1;
	long long int stem=1;
	cin>>T;
	while(T--)
	{
		stem=1;flag=1;
		cin>>K;
		for(i=0;i<K;i++)
			cin>>A[i];
		for(i=0;i<K;i++)
		{
			if(stem<A[i])
			{
				flag=0;
				break;
			}
			else
			stem=2*(stem-A[i]);
		}
		if(flag==0) cout<<"No\n";
		else
		{
			if(stem==0) cout<<"Yes\n";
			else cout<<"No\n";
		}
	}
	return 0;
} 
