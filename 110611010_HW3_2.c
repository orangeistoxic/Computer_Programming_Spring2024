#include <stdio.h>
#include <string.h>

int main()
{
    int hour;
    char min[3],T[3];   //using char to store the minute part,in case of 11:05 or 9:01 situation.
    scanf("%d:%s%s",&hour,&min,&T);
    if(T[0]=='P')    //when PM, +12hour.
    {
        hour+=12;
    }
    
    printf("%d:%s\n",hour,min);
}