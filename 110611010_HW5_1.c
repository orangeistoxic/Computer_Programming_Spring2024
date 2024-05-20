#include <stdio.h>
#include <math.h>

int main()
{
    int input,output;

    scanf("%d",&input);

    output=3*pow(input,5)+2*pow(input,4)-5*pow(input,3)-pow(input,2)-6;
    
    printf("%d",output);

}