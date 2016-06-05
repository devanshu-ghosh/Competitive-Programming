#include<stdio.h>
#define getchar getchar_unlocked
#define putchar putchar_unlocked
int get()
{
	int t=0;
 	char ch=getchar();
 	while(ch<'0'||ch>'9')
 		ch=getchar();
 	while(ch>='0'&&ch<='9')
 	  t=(t<<3)+(t<<1)+ch-'0',ch=getchar();
 	return t;   
}
 
 
void fastWrite(int n)
{
     
	char sum[20];
	int i=0;
	do
	{ sum[i++]=n%10+48;
	  n=n/10;    
	}while(n!=0);     
 
	while(i>0)
	{
	  putchar(sum[--i]);                      
	}     
	putchar('\n');     
}
int main()
{
    
 int t,i,j,count;
  t=get();
 while(t--)
 { count=0;
   i=get();
   j=get();
   while(i!=j)
      {
         if(i<j)
           j=j>>1;
         else
           i=i>>1;
                       
          count++;             
                  
      }    
    fastWrite(count);   
 }       
return 0;
} 

