#include<stdio.h>
#include<math.h>
int absl(int x)
{
	return (x>0)?x:-1*x;
}
int main(){
    int t; scanf("%d",&t);
    while(t--){
        int n,k; scanf("%d%d",&n,&k);
        int i,a[n];
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        int rounds=0,num=0;
        for(i=0;i<n;i++){
            if(a[i]!=-1){
                rounds++;
                int x = a[i];
                num++;
                a[i]=-1; int j=i;
                while(a[j]==-1)
                    j++;
                int ce = a[j]; int z;
                for(z=j;z<n;z++){
                    if(absl(x-a[z])>=k && a[z]!=-1){
                        num++; x = a[z]; a[z] = -1;
                    }
                }
            }
        }
        printf("%d\n",rounds);
    }
    return 0;
}
