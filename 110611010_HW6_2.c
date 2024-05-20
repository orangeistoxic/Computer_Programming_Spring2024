#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

struct Color {
    int red;
    int green;
    int blue;
};

int getRed(struct Color c){
    return c.red;
}

struct Color Brighter(struct Color c){

    if(c.red==0 && c.green==0 && c.blue==0){
        c.red=3;
        c.green=3;
        c.blue=3;

        return c;
    }

    if (c.red > 0 && c.red < 3)
    {
        c.red = 3;
    }
    if (c.green > 0 && c.green < 3)
    {
        c.green = 3;
    }
    if (c.blue > 0 && c.blue < 3)
    {
        c.blue = 3;
    }

    c.red=c.red/0.7;
    c.green=c.green/0.7;
    c.blue=c.blue/0.7;

    if (c.red > 255)
    {
        c.red = 255;
    }
    if (c.green > 255)
    {
        c.green = 255;
    }
    if (c.blue > 255)
    {
        c.blue = 255;
    }

    return c;
}

int main(){

    struct Color color;

    scanf("red=%d,green=%d,blue=%d",&color.red,&color.green,&color.blue);

    int red=getRed(color);

    struct Color brighter=Brighter(color);

    printf("red=%d",red);
    printf(", brighter color =%d,%d,%d", brighter.red, brighter.green, brighter.blue);
}