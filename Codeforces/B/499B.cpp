#include<bits/stdc++.h>
using namespace std;
int main(){
    int N,M;
    string k,v;
    cin>>N>>M;
    map<string,string> m;
    while(M--){
        cin>>k>>v;
        m[k]=v;
    }
    while(N--){
        cin>>k;
        string s = m[k];
        if(k.length()>s.length())
            cout<<s<<" ";
        else
            cout<<k<<" ";
    }
}