// A Dynamic Programming based solution for 0-1 Knapsack problem
#include<stdio.h>

// A utility function that returns maximum of two integers
int max(int a, int b) { return (a > b)? a : b; }
void print(int K[100][100],int n,int W)
{
	int i, w;
	for (i = 0; i <= n; i++)
       for (w = 0; w <= W; w++)
		printf("%d ",K[i][w]);
		printf("\n");
}
// Returns the maximum value that can be put in a knapsack of capacity W
int knapSack(int W, int wt[], int val[], int n)
{
   int i, w;
   int K[100][100];
   // Build table K[][] in bottom up manner
   for (i = 0; i <= n; i++)
   {
       for (w = 0; w <= W; w++)
       {
           if (i==0 || w==0)
               K[i][w] = 0;
           else if (wt[i-1] <= w)
                 K[i][w] = max(val[i-1] + K[i-1][w-wt[i-1]],  K[i-1][w]);
           else
                 K[i][w] = K[i-1][w];
       }
   }
	print(K,n+1,W+1);
   return K[n][W];
}
int main()
{
	/*12 3
15 8
16 9
16 6
10 2*/
    int val[] = {3,8,9,6,2};
    int wt[] = {12,15,16,16,10};
    int  W = 50;
    int n = sizeof(val)/sizeof(val[0]);
    printf("%d", knapSack(W, wt, val, n));
    return 0;
}
