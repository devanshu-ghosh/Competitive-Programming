#include<iostream>
using namespace std;
int A[101];
int main()
{
	int N;
	cin>>N;
	int i;
	for(i=0;i<N;i++)
		cin>>A[i];
	int x,y;
	int max=-500,min=500;
	//find the last min and first max
	for(i=0;i<N;i++)
		if(A[i]>max)
		{
			max=A[i];
			x=i;
		}
	for(i=0;i<N;i++)
		if(A[i]<=min)
		{
			min=A[i];
			y=i;
		}
	int ans=N-1+(x-y);
	if(x<y)
		cout<<ans<<endl;
	else
		cout<<ans-1<<endl;
}
