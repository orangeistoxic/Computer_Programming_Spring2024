#include<stdio.h>

int main()
{
    int i,j;

    /* Part 1
    答案為 i=6 j=16,由於++i會優先處理,所以j在運算時會以6*3-2=16 來執行
    */
    i=5;
    j=++i*3-2;
    printf("%d %d\n",i,j);

    /*Part 2
    答案為-2,因為i++不會馬上執行,++j會馬上執行,所以結果會是7-9=-2;
    */
    i=7;
    j=8;
    printf("%d\n",i++-++j);

    /*Part 3
    答案為i=6,j=9;i在執行第三行時從2改成6,而j則是在第三行時先被改成3後再經過6+3變成9
    */
    i=2;
    j=8;
    j=(i=6)+(j=3);
    printf("%d %d\n",i,j);

    return 0;

}