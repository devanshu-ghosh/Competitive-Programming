#include<iostream>
using namespace std;
int countSetBits(int n)
{
    unsigned int count = 0;
    while (n)
    {
      n &= (n-1) ;
      count++;
    }
    return count;
}
int main()
{
	int x;
	cin>>x;
	cout<<countSetBits(x)<<endl;
}
