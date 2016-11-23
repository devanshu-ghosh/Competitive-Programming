#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    cin>>m;
    vector<int> p(m);
    for(int i=0;i<m;i++)
        cin>>p[i];
    sort(v.begin(),v.end());
    sort(p.begin(),p.end());
    int i=0,j=0,count=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(abs(v[i]-p[j])<=1){
                count++;
                //cout<<v[i]<<" "<<p[j]<<endl;
                p[j]=-45;//mark that
                break;
            }
        }
    }
    cout<<count<<endl;
}