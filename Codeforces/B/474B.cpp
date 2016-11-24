#include<bits/stdc++.h>
using namespace std;
int main(){
    int N,M,x;
    cin>>N;
    vector<int> v(N+1),s(N+1,0);
    for(int i=1;i<=N;i++){
        cin>>v[i];
        s[i]=s[i-1]+v[i];
    }
    cin>>M;
    while(M--){
        cin>>x;
        vector<int>::iterator i ;
        i = lower_bound(s.begin(),s.end(),x);
        cout<<i-s.begin()<<endl;
    }
}