#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N,K;
    cin>>N>>K;
    vector<int> v(N+1,0),s(N+1,0);
    //input
    for(int i=1;i<=N;i++){
        cin>>v[i];
        s[i]=s[i-1]+v[i];
    }
    //find
    int pos=0,min_sum=INT_MAX;
    for(int st=1;st<=(N+1-K);st++){
        int end = st+K-1;
        int sum = s[end]-s[st-1];
        if(sum<min_sum){
            min_sum = sum;
            pos = st;
        }
    }
    cout<<pos<<endl;
}