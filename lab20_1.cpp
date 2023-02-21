#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect x,Rect y){
	double len = 0 , hei = 0;
	len = min(x.x+x.w,y.x+y.w)-max(x.x,y.x);
	hei = min(x.y,y.y)-max(x.y-x.h,y.y-y.h);
	if (hei < 0 || len < 0)
	{
		return 0;
	}
	
	return len*hei;
}
