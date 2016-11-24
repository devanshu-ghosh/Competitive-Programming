#include<bits/stdc++.h>
using namespace std;
int main(){
    int N,M,K,f,ans=0;
    cin>>N>>M>>K;
    vector<int> v(M);
    for(int i=0;i<M;i++)
        cin>>v[i];
    cin>>f;
    for(int i=0;i<M;i++){
        int n=v[i];
        int m=f;
        int count=0;
        while(n>0 || m>0){
            int bn = n&1;n/=2;
            int bm = m&1;m/=2;
            if(bn!=bm)
                count++;
        }
        if(count<=K)
            ans++;
    }
    cout<<ans<<endl;
}