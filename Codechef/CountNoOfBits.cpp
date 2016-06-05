#include<stdio.h>
int turnOffK(int n, int k)
{
    // k must be greater than 0
    if (k <= 0) return n;
 
    // Do & of n with a number with all set bits except
    // the k'th bit
    return (n & ~(1 << (k - 1)));
}
int main()
{
	int N,M;
	scanf("%d",&N);
	M=N;
	int c;
	for(c=0;N;c++) 
		N=N>>1;
	int i;
	for(i=1;i<c;i++) M=turnOffK(M,i);
	printf("%d",M);
}
