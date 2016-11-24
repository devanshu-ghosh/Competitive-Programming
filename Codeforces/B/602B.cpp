#include<iostream>
using namespace std;
int main()
{
	std::ios_base::sync_with_stdio(false);
	int N;
	cin>>N;
	int* A = new int[N];
	for(int i=0;i<N;i++)
		cin>>A[i];
	int len=0,max=0,min=0,maxLen=0;
	for(int i=0;i<N;i++)
	{
		len=1;max=A[i];min=A[i];
		for(int j=i+1;j<N;j++)
		{
			max=(max>=A[j])?max:A[j];
			min=(min<=A[j])?min:A[j];
			if((max-min)<=1)
				len++;
			else
				break;
		}
		if(maxLen<len)
			maxLen=len;
		if(maxLen==(N-i))
			break;
	}
	cout<<maxLen<<endl;
}
