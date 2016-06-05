#include<stdio.h>
typedef struct ExPoint
{
	int x_max,x_min,y_max,y_min;
}ExPoint;
ExPoint Poly[300000];
int isInside(int i,int N)
{
	int XMAX,XMIN,YMIN,YMAX;
	XMIN=Poly[i].x_min;
	XMAX=Poly[i].x_max;
	YMIN=Poly[i].y_min;
	YMAX=Poly[i].y_max;
	int j,x,y,c=0;
	for(j=0;j<N;j++)
	{
		//TAKE A POINT
		x=Poly[j].x_min;y=Poly[j].y_min;
		if(x>XMIN && x<XMAX)
		{
			if(y>YMIN && y<YMAX)
			{
				c++;
			}
		}
	}
	return c;
}
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		int N;
		scanf("%d",&N);
		int i,j;
		for(i=0;i<N;i++)
		{
			int M;
			int xmax,xmin,ymin,ymax,tempX,tempY;
			scanf("%d",&M);
			int a,b;
			scanf("%d %d",&xmax,&ymax);
			for(j=1;j<M;j++)
			{
				scanf("%d %d",&tempX,&tempY);
				if(tempX>xmax)	xmax=tempX;	
				else	xmin=tempX;
				if(tempY>ymax) ymax=tempY;
				else ymin=tempY;
			}
			Poly[i].x_max=xmax;	Poly[i].x_min=xmin;	Poly[i].y_max=ymax;	Poly[i].y_max=ymax;	
		}
		//ALGO
		for(i=0;i<N;i++)
		{
			printf("%d ",isInside(i,N));
		}
	}
	return 0;
}
