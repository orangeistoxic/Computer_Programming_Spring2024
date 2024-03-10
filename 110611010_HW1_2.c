#include <stdio.h>

int main()
{
    //由於題目提到只給2-digit number,故可以直截使用字元直接交換 

    char Num[2];
    scanf("%s", Num);
    printf("%c%c",Num[1],Num[0]);

    return 0;
}