#include<stdio.h>
#include<stdlib.h>
typedef struct point
{
	int x,y;
}point;
bool isInside(int x,int y,int polyX[],int polyY[],int polyCorners)
{
  	int i,j=polyCorners-1;
  	bool oddNodes=0;
    for (i=0;i<polyCorners;i++) 
	{
    	if (polyY[i]<y && polyY[j]>=y || polyY[j]<y && polyY[i]>=y)
	    {
    	  	if (polyX[i]+(y-polyY[i])/(polyY[j]-polyY[i])*(polyX[j]-polyX[i])<x)
		    {
    	    	oddNodes=!oddNodes; 
			}
		}
    	j=i;
	}
  	return oddNodes;
}
int M[100000];
int PolyX[1000000];
int PolyY[1000000];
point Sides[100000];
int main()
{
	int T,i;
	scanf("%d",&T);
	int c=1,j;
	int t=0;//for priting the first point
	while(T--)
	{
		int N,d=0;
		scanf("%d",&N);
		for(i=0;i<N;i++)
		{
			scanf("%d",&M[i]);
			d=0;
			for(j=0;j<M[i];j++)
			{
				scanf("%d%d",&PolyX[c],&PolyY[c]);
				if(d==0) 
				{
					Sides[i].x=PolyX[c];Sides[i].y=PolyY[c];d++;
				}
				c++;
			}
		}
		//MAKE THE M ARRAY CUMMULATIVE
		for(i=1;i<N;i++)
			M[i]=M[i-1]+M[i];
		//ALGO
		c=1;int x=0,u;
		int *TempX,*TempY;
		for(i=0;i<N;i++)
		{
			//Step 1 : Get a polygon
			//Step 2:get 1st point
			//Step 3 : check for all points except 1
			//STEP 1
			u=0;
			x=M[i]-x;//actual size
			TempX=(int *)malloc(x*sizeof(x));
			TempY=(int *)malloc(x*sizeof(x));
			for(;c<=M[i];c++)
			{
				TempX[u]=PolyX[c];
				TempY[u]=PolyY[c];
				u++;
			}
			int Xcor,Ycor,k,count=0;
			Xcor=TempX[0];
			Ycor=TempY[0];
			for(k=0;k<N;k++)
			{
				if(Sides[k].x==Xcor && Sides[k].y==Ycor) continue;
				else
				{
					if(isInside(Sides[k].x,Sides[k].y,TempX,TempY,x)) count++;
				}	
			}
			printf("%d ",count);count=0;
			free(TempX);
			free(TempY);
		}
	}
	return 0;
}
