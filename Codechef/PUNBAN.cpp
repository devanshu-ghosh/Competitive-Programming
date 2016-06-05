#include<iostream>
//I used the exponential formula to find answers to few test cases
//it becomes very slow when n reaches 36 
//then i formulated an iterative solution based on the property of the ques
//Prop : N= 1+2+3+...+x-1+x+(x-1)+(x-2)+....3+2+1 . Here x comes out to be sqrt(N) . Ans= no of terms ; 2*x+1
//or N=1+2+3+4+....+x+x+(x-1)+(x-2)+.....3+2+1 .  x*(x+1)=N . Here Ans comes out to be 2*x
//Jab hum yaha pe the then i saw ki the speed can decrease too to make up the solution
//i had no solution for other numbers which did not fit in the above 2 cases
//to get the answer i wrote a recursion
//N=10^5 . so we could not have created a 2-d array for that
#define INF 10
using namespace std;
int A[100490];
/*long long int minVal(long long int x,long long int y,long long int z)
{
	long long int t=(x<=y)?x:y;
	return (t<=z)?t:z;
}
long long int f(long long int s,long long int n)
{
	if(s==1 && n==1) return 1;
	if(s==0) return INF;
	if(n<=1 && s!=1) return INF;
	return minVal(1+f(s,n-s),1+f(s+1,n-s-1),1+f(s-1,n-s+1));
}*/
int main()
{
	//pre-processing
	int i=0;
	for(i=1;i<=317;i++)
		A[i*i]=2*i-1;
	for(i=1;i<=316;i++)
		A[i*(i+1)]=2*i;
	int cvalue;
	for(i=100489;i>=1;i--)
	{
		if(A[i]!=0) cvalue=A[i];
		A[i]=cvalue;
	}
	int T,N;
	cin>>T;
	while(T--)
	{
		cin>>N;
		cout<<A[N]<<endl;
	}
	return 0;
}
