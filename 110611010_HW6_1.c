#include <stdio.h>
#include <math.h>
#include <string.h>
#include<ctype.h>

struct point
{
    int x,y;
};
struct rectangle
{
    struct point upper_left, lower_right;
} rec;

struct point CenterPoint(struct rectangle R){

    struct point c={(R.upper_left.x+R.lower_right.x)/2,(R.upper_left.y+R.lower_right.y)/2};

    return c;
}

int Area(struct rectangle R){

    return abs(R.lower_right.x-R.upper_left.x)*abs(R.lower_right.y-R.upper_left.y);
}

int main()
{

    scanf("upper_left=%d,%d lower_right=%d,%d", &rec.upper_left.x, &rec.upper_left.y,&rec.lower_right.x,&rec.lower_right.y);

    struct point center=CenterPoint(rec);

    int area=Area(rec);

    printf("area=%d center=%d,%d",area,center.x,center.y);


    
}