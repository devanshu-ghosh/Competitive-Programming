//Sad question . Uses some logic that cannot be thought of . 
//xxyy : i was deleting x . but it said it was obvious to delete y 
//no idea why 
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,t,f;
    cin>>s;
    if(s.length()<3){
        cout<<s<<endl;
        return 0;
    }
    for(int i=2;i<s.length();i++){
        if( s[i-2]==s[i-1] && s[i-2]==s[i] && s[i-1]==s[i]){
            s[i-2]='*';
        }
    }
    for(int i=0;i<s.length();i++){
        if(s[i]!='*')
            t.push_back(s[i]);
    }
    //2nd pass of test
    if(t.length()<4){
        cout<<t<<endl;
        return 0;
    }
    for(int i=t.length()-4;i>=0;i--){
        if( t[i+3]==t[i+2] && t[i+1]==t[i]){
            t[i]='*';
        }
    }
    for(int i=0;i<t.length();i++){
        if(t[i]!='*')
            f.push_back(t[i]);
    }
    cout<<f<<endl;
}