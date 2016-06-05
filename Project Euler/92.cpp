#include<iostream>
//#include<stack>
#define MAX 10000001
using namespace std;
//int A[568];
int sq[10]={0,1,4,9,16,25,36,49,64,81};
int add(int n)
{
	int s=0;
	while(n)
	{
		int d=n%10;
		s=s+sq[d];
		n=n/10;
	}
	return s;
}
/*
int main()
{
	A[1]=1;
	A[89]=89;
	stack<int> s;
	int c=0;
	for(int i=2;i<568;i++)
	{
		int p=i;
		if(A[p]!=0)
		{
			continue;
		} 
		while(A[p]==0)
		{
			s.push(p);
			p=add(p);
		}
		int ans=A[p];
		while(!s.empty())
		{
			int q=s.top();
			if(q<=(MAX-1))
			{
				A[q]=ans;
			}
			s.pop();
		}
	}
	int i;
	for(i=2;i<568;i++)
		if(A[i]==89) c++;
	for(i=568;i<MAX;i++)
	{
		int r=add(i);
		if(A[r]==89) c++;
	}
	cout<<c;
}*/
int main()
{
	long n=0;
	int count=0;
	for (int i=2; i<=10; i++) {
		//Console.WriteLine(i);
		n=i;
		while (true) {
			n=add(n);
			if (n==89) break;
			if (n==1) {
				count++;
				break;
			}
		}
		cout<<i<<endl;
	}
	cout<<count;
}
