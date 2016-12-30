//couldnt pass the solution 
//I was trying to certain the strategy in a greedy solution
//Nothing wrong in that 
//But there was no way to do that
//the tutorial just says "You can simply guess why such a solution is correct"
//I mean Seriously

#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
ll abs_l(ll a){
    if(a<0)
        return -a;
    return a;
}
int main(){
    int N,p;
    cin>>N;
    vector<int> less,okay,above;
    for(int i=0;i<N;i++){
        cin>>p;
        if(p<=0)    less.push_back(p);
        if(p>=1 && p<=N)    okay.push_back(p);
        if(p>N)     above.push_back(p);
    }
    sort(less.begin(),less.end());
    sort(above.begin(),above.end(),greater<int>());
    //Put the okay values first
    vector<int> H(N+1,0);
    //i didnt take into consideration that okay values may duplicate too 
    //too many descisons to take . Sad man 
    for(int i=0;i<okay.size();i++)
        H[okay[i]]=okay[i];
    //now we have 2 hieristics . Take less first and then above
    //and vice versa
    ll c1=0;
    int k=0;
    if(less.size()>0){
        for(int i=1;i<=N;i++){
            if(H[i]==0){
                H[i]=less[k++];
                c1+=abs_l(i-H[i]);
            }
            if(k==less.size())
                break;   
        }    
    }
    k=0;
    if(above.size()>0){
        for(int i=N;i>=1;i--){
            if(H[i]==0){
                H[i]=above[k++];
                c1+=abs_l(i-H[i]);
            }
            if(k==above.size())
                break;   
        }
    }
    //we got c1 
    vector<int> H2(N+1,0);
    for(int i=0;i<okay.size();i++)
        H2[okay[i]]=okay[i];
    //now we have 2 hieristics . Take less first and then above
    //and vice versa
    ll c2=0;
    k=0;
    if(above.size()>0){
        for(int i=N;i>=1;i--){
            if(H2[i]==0){
                H2[i]=above[k++];
                c2+=abs_l(i-H2[i]);
            }
            if(k==above.size())
                break;   
        }
    }
    k=0;
    if(less.size()>0){
        for(int i=1;i<=N;i++){
            if(H2[i]==0){
                H2[i]=less[k++];
                c2+=abs_l(i-H2[i]);
            }
            if(k==less.size())
                break;   
        }    
    }
    //we got c2 
    cout<<min(c1,c2)<<endl;
}