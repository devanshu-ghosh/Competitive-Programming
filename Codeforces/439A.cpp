#include<bits/stdc++.h>
using namespace std;
int main(){
    int N,D,t;
    cin>>N>>D;
    int sum=0;
    for(int i=0;i<N;i++){
        cin>>t;
        sum+=t;
    }
    if((sum+10*(N-1))>D)
        cout<<-1<<endl;
    else{
        int r = D - sum - 10*(N-1);
        int count = 2*(N-1) + r/5;
        cout<<count<<endl;
    }
}