#include<iostream>
using namespace std;
int A[100];
int N;
//this returns the lower bound of the BS
//if present . ok. but if not returns the just less value present
//failing to run if last value is entered as key
int find_lower(int k) 
{
    // binary search
    int L = 0, R = N + 1;
    while (R - L > 1) 
	{
        int M = L + R >> 1;
        (A[M] <= k ? L : R) = M;
    }
    return A[L];
}
int find_upper(int k) 
{
    // binary search
    int L = 0, R = N + 1;
    while (R - L > 1) 
	{
        int M = L + R >> 1;
        (A[M] <= k ? L : R) = M;
    }
    return A[R];
}
int main()
{
	N=10;
	int i=N;
	while(i--)
		A[i]=i*2;
	i=N;
	while(i--)
		cout<<A[i]<<" ";
	cout<<endl;
	int Q;
	cin>>Q;
	while(Q--)
	{
		cout<<"Enter a key : ";
		int k;
		cin>>k;
		cout<<find_lower(k)<<" ";//<<find_upper(k)<<endl;
	}
	
}
