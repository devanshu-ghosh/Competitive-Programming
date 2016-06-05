#include <stdio.h>
#include <stdlib.h>

typedef unsigned long long ULL;

ULL gcd(ULL a,ULL b){
  ULL c;
  while(b>0) c=a%b, a=b, b=c;
  return a;
}

ULL bin(ULL n,ULL k){
  if(n-k < k) k=n-k;
  ULL p,i,d,num,den,g;
  p=1,num=1,den=1;
  for(i=1;i<=k;i++){
    num*=(n-i+1);
    den*=i;
    g=__gcd(num,den);
    if(g>1)
    {
    	num/=g;
    	den/=g;
	}
  }
  return num/den;
}

int main(){
  int TST;
  scanf("%d",&TST);
  while(TST--){
    ULL n,k,ans;
    scanf("%llu %llu",&n,&k);
    ans=bin(n,k);
    printf("%llu\n",ans);
  }
  return 0;
}
