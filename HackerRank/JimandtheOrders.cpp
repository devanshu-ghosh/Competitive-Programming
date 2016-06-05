#include<iostream>
#include<algorithm>
#include<map>
using namespace std;
class X
{
	public:
	int num,time;
};
int cmp(X p , X q)
{
	return p.time<q.time;
}
int main()
{
	int N,t,d;
	cin>>N;
	X* A = new X[N];
	for(int i=0;i<N;i++)
	{
		cin>>t>>d;
		A[i].num=i;
		A[i].time=t+d;
	}
	sort(A,A+N,cmp);
	for(int i=0;i<N;i++)
	{
		cout<<A[i].num+1<<endl;
	}
}
