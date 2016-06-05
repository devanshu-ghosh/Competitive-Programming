#include<iostream>
using namespace std;
int cache[100005];
int A[100005];
int N,c_dp=0,c_b=0;
int CO(int key,int from)
{
	c_dp++;
	if(from==N) return 0;
	if(cache[from]!=(-1)) return cache[from];
	if(A[from]==key) cache[from]=1+CO(key,from+1);
	else cache[from]=CO(key,from+1);
	return cache[from];
}
int brute(int key,int from)
{
	int i,d=0;
	for(i=from;i<N;i++)
	{
		if(key==A[from]) d++;
		c_b++;
	}
	return d;
}
int main()
{
	int T,K,Q,temp;
	cin>>T;
	while(T--)
	{
		int i;
		//initialise the cache
		for(i=0;i<100005;i++) cache[i]=-1;
		cin>>N;
		for(i=0;i<N;i++) cin>>A[i];
		cin>>K>>Q;
		while(Q--)
		{
			cin>>temp;
			int x=brute(K,temp);
			int y=CO(K,temp);
			cout<<y<<" "<<c_b<<" "<<c_dp<<endl;
			c_b=0;
			c_dp=0;
		}
	}
	return 0;
}
