//COMPUTATIONAL GEOMETRY
#include<stdio.h>
#include<cmath>
using namespace std;
const int LEFT=-1,RIGHT=1,ON_THE_LINE=0;
const int ANTI_CLOCKWISE=-1,CLOCKWISE=1;
struct Point
{
	int x,y;
};
//computes P1 cross P2
int get_cross_product(Point P1,Point P2)
{
	return P1.x*P2.y-P1.y*P2.x;
}
//computes P1-P2
Point subtract(Point P1,Point P2)
{
	Point P3;
	P3.x=P1.x-P2.x;
	P3.y=P1.y-P2.y;
	return P3;
}
//returns direction of point P wrt to line segment AB
int get_direction(Point A,Point B,Point P)
{
	//STEP 1 : Translate origin to Point A
	B=subtract(B,A);
	P=subtract(P,A);
	//STEP 2 : Calculate cross pdt BxP 
	//if positive P is on left
	int cross_pdt=get_cross_product(B,P);
	if(cross_pdt>0) return LEFT;
	else if(cross_pdt<0) return RIGHT;
	else return ON_THE_LINE;
}
double get_Triangle_Area(Point a,Point b,Point c)
{
	double sum=get_cross_product(a,b)+get_cross_product(b,c)+get_cross_product(c,a);
	return abs(sum/2.0);
}
double get_Polygon_Area(Point vertices[],int N)
{
	double sum;
	int i;
	for(i=0;i<N;i++)
		sum+=get_cross_product(vertices[i],vertices[(i+1)%N]);
	return abs(sum/2.0);
}
int main()
{
	return 0;
}
