#include<stdio.h>
int M[100],A[100],N;
void initialize(int node, int b, int e)
  {
      if (b == e)
          M[node] = b;
      else
       {
  //compute the values in the left and right subtrees
          initialize(2 * node, b, (b + e) / 2);
          initialize(2 * node + 1, (b + e) / 2 + 1, e);
  //search for the minimum value in the first and 
  //second half of the interval
          if (A[M[2 * node]] <= A[M[2 * node + 1]])
              M[node] = M[2 * node];
          else
              M[node] = M[2 * node + 1]; 
      }
  } 
  
  
  int query(int node, int b, int e,int i, int j)
  {
      int p1, p2;
   
  //if the current interval doesn't intersect 
  //the query interval return -1
      if (i > e || j < b)
          return -1;
   
  //if the current interval is included in 
  //the query interval return M[node]
      if (b >= i && e <= j)
          return M[node];
   
  //compute the minimum position in the 
  //left and right part of the interval
      p1 = query(2 * node, b, (b + e) / 2, i, j);
      p2 = query(2 * node + 1, (b + e) / 2 + 1, e, i, j);
   
  //return the position where the overall 
  //minimum is
      if (p1 == -1)
          return M[node] = p2;
      if (p2 == -1)
          return M[node] = p1;
      if (A[p1] <= A[p2])
          return M[node] = p1;
      return M[node] = p2;
  }
  
  int main()
  {
  		int i;
  		for(i=0;i<100;i++)
  		{
  			M[i]=-1;
  			A[i]=-1;
  		}
  		int N;
  		printf("Enter the no. of No. : ");
  		scanf("%d",&N);
  		for(i=0;i<N;i++)
  		{
  			scanf("%d",&A[i]);
  		}
  		initialize(1,0,N-1);
  		printf("3-5 : %d",A[query(1,0,N-1,3,5)]);		
  }
