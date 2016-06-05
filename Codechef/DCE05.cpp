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
	//printf("%d",isPowerOfTwo(3));
	int T;
	scanf("%d",&T);
	while(T--)
	{
		long int N,M;
		scanf("%ld",&N);
		M=N;
		int c;
		//count the no of bits
		for(c=0;N;c++) 
			N=N>>1;
		int i;
		for(i=1;i<c;i++) M=turnOffK(M,i);
		printf("%ld\n",M);
	}
	return 0;
}
