#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
int main()
{
	srand(time(NULL));
	int r = rand();
	int T,N,K;
	T=rand()%1000;
	cout<<T<<endl;
	while(T--)
	{
		N=rand()%300;
		K=rand()%1000;
		cout<<N<<" "<<K<<endl;
		for(int i=0;i<N;i++)
			cout<<rand()%1000<<" ";
		cout<<endl;
	}
}
