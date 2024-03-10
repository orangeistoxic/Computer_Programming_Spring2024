#include <stdio.h>
#include <string.h>

int main()
{
    //可將輸入的日期拆解成數個字元,再重新組合即可,且當日其中有個位數時前面也需要加上0,故不需要擔心字元數不同的問題
    char Date[11];

    scanf("%s", Date);
    printf("%c%c%c%c%c%c%c%c", Date[6], Date[7], Date[8], Date[9], Date[0], Date[1], Date[3], Date[4]);

    return 0;
}


