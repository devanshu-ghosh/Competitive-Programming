#include<iostream>
typedef long long int ll;
using namespace std;
ll mini(ll A,ll B){
    if(A<B) return A;
    return B;
}
//Very good question . In future , never think that a possibility isnt possible 
//Always prove it . Thast the only way to be sure . However daunting it seems 
int main(){
    ll N,A,B,C;
    cin>>N>>A>>B>>C;
    if(N%4==0){
        cout<<0<<endl;
    }
    else{
        int K = 4 - N%4;
        ll ans=0;
        switch(K){
            case 1: ans=mini(A,mini(3*C*1LL,C+B));break;
            case 2: ans=mini(2*A,mini(B,2*C*1LL));break;
            case 3: ans=mini(3*A*1LL,mini(B+A,C));break;
        }
        cout<<ans<<endl;
    }
}