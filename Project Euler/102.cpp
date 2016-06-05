//COMPUTATIONAL GEOMETRY
#include<iostream>
#include<cmath>
using namespace std;
struct Point
{
	int x,y;
};
//computes P1 cross P2
int get_cross_product(Point P1,Point P2)
{
	return P1.x*P2.y-P1.y*P2.x;
}
int get_Triangle_Area(Point a,Point b,Point c)
{
	double sum=get_cross_product(a,b)+get_cross_product(b,c)+get_cross_product(c,a);
	return abs(sum);
}
int main()
{
	int T=1000;int count=0;
	while(T--)
	{
		Point a,b,c;
		Point p;p.x=0;p.y=0;
		cin>>a.x>>a.y;cin>>b.x>>b.y;cin>>c.x>>c.y;
		int abc=get_Triangle_Area(a,b,c);
		int pbc=get_Triangle_Area(p,b,c);
		int pca=get_Triangle_Area(p,c,a);
		int pab=get_Triangle_Area(p,a,b);
		if(abc==(pab+pbc+pca))
			count++;
	}
	cout<<count;
}
