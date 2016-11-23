#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
typedef long long int ll;
ll maxi(int a,int b)
{
    if(a>b)
        return a;
    return b;
}
ll f(ll A,ll B){
    if(A==0 || B==0)
        return 0;
    if(A==1 && B!=1)
        return 1+f(A+1,B-2);
    if(A!=1 && B==1)
        return 1+f(A-2,B+1);
    if(A==1 && B==1)
        return 0;
    if(A>=B)
        return 1+f(A-2,B+1);
    return 1+f(A+1,B-2);
}
int main()
{
    int A,B;
    cin>>A>>B;
    cout<<f(A,B)<<endl;
}