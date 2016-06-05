//Chef and polygon
#include<stdio.h>
typedef struct element
{
	int x,y;
}Point;
Point Poly[10005][10005];
bool isInside(int row,int x,int y)
{
	int polyCorners=Poly[row][0].x;
  	int   i, j=polyCorners-1 ;
  	bool  oddNodes=0;
  	float polyX[100];
	float polyY[100];
	for(i=0;i<polyCorners;i++)
	{
		polyX[i]=Poly[row][i+1].x;
		polyY[i]=Poly[row][i+1].y;	
	}
  	for(i=0;i<polyCorners;i++)
    {
	    if (polyY[i]<y && polyY[j]>=y || polyY[j]<y && polyY[i]>=y) 
		{
		      if(polyX[i]+(y-polyY[i])/(polyY[j]-polyY[i])*(polyX[j]-polyX[i])<x)
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
	//I should save the input
	while(T--)
	{
		int N;
		scanf("%d",&N);
		int i;
		for(i=1;i<=N;i++)//N is no. of Polygons
		{
			//Poly[0].x saves no of vertices
			scanf("%d",&Poly[i][0].x);//M
			//now M values from 1 to M index
			int j;
			for(j=1;j<=Poly[i][0].x;j++)
			{
				scanf("%d%d",&Poly[i][j].x,&Poly[i][j].y);
			}
		}
		int c=0,j;
		//now we act on the input
		for(i=1;i<=N;i++)
		{
			//choose a polygon . That is i .
			//Now there are N-1 polygons for which we will test for point inclusion
			for(j=1;j<=N;j++)
			{
				if(j==i) continue;
				else
				{
					if(isInside(i,Poly[j][1].x,Poly[j][1].y)) c++;
				}
			}
			printf("%d ",c);c=0;
		}
	}
	return 0;
}
