#include<stdio.h>
int polyX[100][100];
int polyY[100][100];
int sides[100];
bool isInside(int row,int x,int y)
{
  int i,j=sides[row]-1;
  bool  oddNodes=0;
  for (i=0;i<sides[row];i++) 
  {
    if (polyY[row][i]<y && polyY[row][j]>=y ||  polyY[row][j]<y && polyY[row][i]>=y) 
	{
      if (polyX[row][i]+(y-polyY[row][i])/(polyY[row][j]-polyY[row][i])*(polyX[row][j]-polyX[row][i])<x)
	  {
        oddNodes=!oddNodes;
	  }
	}
    j=i;
  }
   return oddNodes;
}
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		//no of polygons
		int N;
		scanf("%d",&N);
		int i,j;
		for(i=0;i<N;i++)
		{
			scanf("%d",&sides[i]);
			for(j=0;j<sides[i];j++)
			{
				scanf("%d%d",&polyX[i][j],&polyY[i][j]);
			}
		}
		//Algo
		int c=0;
		for(i=0;i<N;i++)
		{
			for(j=0;j<N;j++)
			{
				if(j==i) continue;
				else 
				{
					if(isInside(i,polyX[j][1],polyY[j][1]))
					{
						c++;
					}
				}
			}
			printf("%d ",c);c=0;
		}
	}
	return 0;
}
