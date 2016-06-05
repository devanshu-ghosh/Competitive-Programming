#include<iostream>
using namespace std;
int m,l;
int fac[10]={1,1,2,6,24,120,720,5040,40320,362880};
int f(int x)
{
	int s=0;
	while(x)
	{
		int d=x%10;
		s+=fac[d];
		x/=10;
	}
	return s;
}
void floyd_cycle_finding(int x0) 
{
	int tortoise = f(x0), hare = f(f(x0));
	while (tortoise != hare) { tortoise = f(tortoise); hare = f(f(hare)); }
	int mu = 0; hare = tortoise; tortoise = x0;
	while (tortoise != hare) { tortoise = f(tortoise); hare = f(hare); mu += 1; }
	int lambda = 1; hare = f(tortoise);
	while (tortoise != hare) { hare = f(hare); lambda += 1; }
	m=mu;l=lambda;
}
int main()
{
	int i,max=0,p=10;
	for(i=100000;i<1000000;i++)
	{
		floyd_cycle_finding(i);
		if((l+m)==60)
		{
			cout<<i<<endl;
			break;
		}
		
	}
	
}
