#include<iostream>
using namespace std;
int f(int N,int M)
{
	if(N==0) return 1;
	else return f(N-1,M)+f(N/M,M);
}
int main()
{
	cout<<f(5,2);
}
