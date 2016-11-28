#include<iostream>
using namespace std;
int main(){
    int N,K;
    cin>>N>>K;
    string s;
    cin>>s;
    //find the pos of G and T
    int g=0,t=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='G')
            g=i;
        if(s[i]=='T')
            t=i;
    }
    if(g<t){
        int index=g;
        while(index<N && index!=t && s[index]!='#')
            index+=K;
        //cout<<index<<endl;
        if(index>=N || s[index]=='#')
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
    else{
        int index=g;
        while(index>=0 && index!=t && s[index]!='#')
            index-=K;
        if(index<0 || s[index]=='#')
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
}