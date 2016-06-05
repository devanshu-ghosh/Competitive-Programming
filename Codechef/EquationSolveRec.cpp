//solve 4x+6y+8z=N and print all answers
#include<iostream>
int A[100][100][100];
using namespace std;
int N;
void f(int x,int y,int z)
{
	if(A[x][y][z]==1) return;
	if(4*x+6*y+8*z==N)
	{
		//to generate unique solutions
		if(A[x][y][z]==0)
		{
			A[x][y][z]=1;
			cout<<x<<" "<<y<<" "<<z<<endl;
		}
	} 
	else if(4*x+6*y+8*z>N) return;
	else
	{
		f(x+1,y,z);
		f(x,y+1,z);
		f(x,y,z+1);
	}
}
int main()
{
	cin>>N;
	f(0,0,0);
}
