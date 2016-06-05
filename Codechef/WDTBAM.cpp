#include<iostream>
#include<string>
using namespace std;
long long int W[1005];
int main()
{
	int T,N,i,c;
	string s1,s2;
	cin>>T;
	while(T--)
	{
		cin>>N;
		cin>>s1>>s2;
		for(i=0;i<=N;i++)
			cin>>W[i];
		c=0;
		for(i=0;i<N;i++)
		{
			if(s1.at(i)==s2.at(i)) c++;
		}
		//no answers correct
		if(c==0) cout<<W[0]<<endl;
		//all answers correct
		else if(c==N)
			cout<<W[c]<<endl;
		else
		{
			long long int max=W[1];
			for(i=2;i<=c;i++)
			{
				if(W[i]>=max) max=W[i];
			}
			if(W[0]>max) cout<<W[0]<<endl;
			else cout<<max<<endl;
		}
	}
	return 0;
}
