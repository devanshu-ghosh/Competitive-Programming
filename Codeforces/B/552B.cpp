#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main(){
    ll N;
    cin>>N;
    ll count=0;
    while(N){
        ll noOfDigits = (to_string(N)).length();
        ll lastNum = pow(10,noOfDigits-1);
        count+= (N-lastNum+1)*noOfDigits*1LL;
        N = lastNum - 1;
    }
    cout<<count<<endl;
}