//The value of index overflowws pretty fast
//it stops working
#include<stdio.h>
#define MAX_Z 400
long long int A[1000000];//saves the triples z values
//the transforamtion matrix
int U[][9] =  {{ 1,-2,2,2,-1,2,2,-2,3},
        	   { 1,2,2,2,1,2,2,2,3},
        		{-1,2,2,-2,1,2,-2,2,3}};
void new_triple(long long int seed[],int index)
{
	int i;
	long long int t[3];//saves the new triple
	//seed array is base primitive triple
	//base case
	//hypotenuse value greater than MAX_Z
	//saving in the actual array
	if(seed[2]>MAX_Z) return;
	A[index]=seed[2];
	/* recursively produce next tier by applying the new transformation the matrices */
    for (i = 0; i < 3; i++)
	{
        	t[0] = U[i][0] * seed[0] + U[i][1] * seed[1] + U[i][2] * seed[2];
        	t[1] = U[i][3] * seed[0] + U[i][4] * seed[1] + U[i][5] * seed[2];
        	t[2] = U[i][6] * seed[0] + U[i][7] * seed[1] + U[i][8] * seed[2];
        	new_triple(t,3*index+(i+1));
    }
}
int main()
{
	long long int seed[3] = {3, 4, 5};
	new_triple(seed,0);
	int i,c=0;
	for(i=0;i<100;i++)
	if(A[i]!=0){
		printf("%lld\n",A[i]);
		c++;
	}
	printf("%d",c);	
}

