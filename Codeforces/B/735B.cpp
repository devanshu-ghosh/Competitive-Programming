#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
double maxi(double a,double b){
    if(a>b) return a;
    return b;
}
int main(){
    int N,N1,N2;
    cin>>N>>N1>>N2;
    vector<int> v(N);
    for(int i=0;i<N;i++)
        cin>>v[i];
    sort(v.begin(),v.end(),greater<int>());
    double s11=0,s12=0,s21=0,s22=0;
    for(int i=0;i<N;i++)
    {
        if(i<N1)
            s11+=v[i];
        else if(i>=N1 && i<(N1+N2))
            s12+=v[i];
        else
            break;
    }
    for(int i=0;i<N;i++)
    {
        if(i<N2)
            s22+=v[i];
        else if(i>=N2 && i<(N1+N2))
            s21+=v[i];
        else
            break;
    }
    double ans1 = s11/N1 + s12/N2;
    double ans2 = s21/N1 + s22/N2;
    std::cout << std::fixed;
    std::cout << std::setprecision(9);
    cout<<maxi(ans1,ans2)<<endl;
}