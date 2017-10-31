#include <bits/stdc++.h>
 
using namespace std;
 
int v[500050];
 
map <int,int> m;
 
 
int main()
{
    int n,k;
 
    scanf("%d %d",&n,&k);
 
    for(int i=0;i<n;i++) {
        scanf("%d",&v[i]);
    }
 
    int ians,jans,nans=0;
    int l=0,r=0;
 
    int kgood=1;
 
 	m[v[0]]++;
 
    while(l<n) {

        while(kgood<=k && r<n) {  
            r++;
            if(m[v[r]]!=0) m[v[r]]++;
            else {
                kgood++;
                m[v[r]]++;
            }      
        }
        
        m[v[r]]--;
        if(m[v[r]]==0) kgood--;
        r--;
 
        if(r-l+1>nans) {
            nans = r-l+1;
            ians = l;
            jans = r;
        }
           
        m[v[l]]--;
        if(m[v[l]]==0) kgood--;
        l++;    
    }
   
    printf("%d %d",ians+1,jans+1);
   
    return 0;
}