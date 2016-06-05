//  Globals which should be set before calling this function:
//
//  int    polyCorners  =  how many corners the polygon has (no repeats)
//  float  polyX[]      =  horizontal coordinates of corners
//  float  polyY[]      =  vertical coordinates of corners
//  float  x, y         =  point to be tested
//
//  (Globals are used in this example for purposes of speed.  Change as
//  desired.)
//
//  The function will return YES if the point x,y is inside the polygon, or
//  NO if it is not.  If the point is exactly on the edge of the polygon,
//  then the function may return YES or NO.
//
//  Note that division by zero is avoided because the division is protected
//  by the "if" clause which surrounds it.
#include<stdio.h>
typedef struct pol
{
	float x,y;
}pol;
pol poly[10];

float x,y;
int polyCorners;
bool pointInPolygon()
{
  int   i, j=polyCorners-1 ;
  bool  oddNodes=0;

  for (i=0; i<polyCorners; i++) {
    if (polyY[i]<y && polyY[j]>=y
    ||  polyY[j]<y && polyY[i]>=y) {
      if (polyX[i]+(y-polyY[i])/(polyY[j]-polyY[i])*(polyX[j]-polyX[i])<x) {
        oddNodes=!oddNodes; }}
    j=i; }

  return oddNodes;
}
int main()
{
	scanf("%d",&polyCorners);
	int i;
	for(i=0;i<polyCorners;i++)
	{
		scanf("%f%f",&polyX[i],&polyY[i]);
	}
	printf("Enter the test point : ");
	scanf("%f%f",&x,&y);
	if(pointInPolygon())
	{
		printf("YES");
	}
	else printf("NO");
}
