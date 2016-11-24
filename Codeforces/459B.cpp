#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    int N;
    cin>>N;
    vector<int> v(N);
    for(int i=0;i<N;i++)
        cin>>v[i];
    //find min and max : max_diff = max - min 
    //find the count of those . and multiply
    vector<int>::iterator mi = min_element(v.begin(),v.end());ll mini = *mi;//cout<<mini<<endl;
    vector<int>::iterator ma = max_element(v.begin(),v.end());ll maxi = *ma;//cout<<maxi<<endl;
    cout<<maxi-mini<<" ";
    //now count the values
    ll mic = 0,mac = 0;
    for(int i=0;i<N;i++){
        if(v[i]==mini)
            mic++;
        if(v[i]==maxi)
            mac++;
    }
    if(mini == maxi){
        //sad 
        cout<<((mic)*1LL*(mic-1))/2<<endl;
    }
    else{
        cout<<mic*mac*1LL<<endl;
    }
}