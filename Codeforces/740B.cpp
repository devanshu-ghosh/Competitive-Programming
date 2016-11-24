#include<bits/stdc++.h>
using namespace std;
int main(){
    int N,M;
    cin>>N>>M;
    vector<int> v(N+1),sum(N+1,0);
    for(int i=1;i<=N;i++){
        cin>>v[i];
        sum[i]=sum[i-1]+v[i];
    }
    int l,r,ans=0;
    while(M--){
        cin>>l>>r;
        int s = sum[r]-sum[l-1];
        if(s>0)
            ans+=s;
    }
    cout<<ans<<endl;
}