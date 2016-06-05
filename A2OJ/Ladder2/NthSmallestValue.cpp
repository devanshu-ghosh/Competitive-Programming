#include<iostream>
using namespace std;
int A[10];
int main()
{
	int T,i;
	cin>>T;
	while(T--)
	{
		for(i=0;i<10;i++)
			cin>>A[i];
		int min=A[0],pos=0;
		for(i=1;i<10;i++)
		{
			if(A[i]<min)
			{
				min=A[i];
				pos=i;
			}
		}
		A[pos]=2000;
		min=A[0];
		for(i=1;i<10;i++)
		{
			if(A[i]<min)
			{
				min=A[i];
			}
		}
		cout<<min<<endl;
	}
}
