#include<bits/stdc++.h>
using namespace std;
vector< vector<int> > g;
int N,M;
vector<int> cat;
vector<int> visited;
int f(int r,int count){
    //if leaf , if has one neighbour , that is its parent
    visited[r]=1;//once inside , we have visited it
    if(g[r].size()==1 && r!=1){
        if(cat[r]==1)
            count++;
        if(count>M)
            return 0;
        return 1;
    }
    else{
        //not leaf
        count = (cat[r]==1)?count+1:0;
        //for all neighbours
        int ans=0;
        for(int i=0;i<g[r].size();i++){
            if(visited[g[r][i]]==0){
                ans+= f(g[r][i],count);
            }
        }
        return ans;
    }
}
int main(){
    int x,y;
    cin>>N>>M;
    cat.resize(N+1);
    visited.resize(N+1,0);
    //insert cat data
    for(int i=1;i<=N;i++){
        cin>>cat[i];
    }
    //insert tree data
    g.resize(N+1,vector<int>());
    for(int i=1;i<N;i++){
        cin>>x>>y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    cout<<f(1,0)<<endl;
}