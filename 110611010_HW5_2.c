#include <stdio.h>
#include <math.h>
#include <string.h>


void selection_sort(int Array[100],int Len,int TrueLen) //TrueLen is the length of the array
{
    
    int max = 0, maxLoca;
    for (int i = 0; i <= Len - 1; i++) // determine the greatest number and its location
    {
        if (Array[i] > max)
        {
            max = Array[i];
            maxLoca = i;
        }
    }

    int temp = Array[maxLoca]; // swap the greastest number and the last one
    Array[maxLoca] = Array[Len - 1];
    Array[Len - 1] = temp;

    if (Len == 1) // if sorting complete, print it.
    {
        for(int i=0;i<TrueLen;i++)
        {
            printf("%d ",Array[i]);
        }
        printf("\n");
    }
    else // if not, shorten the length by 1,then do it again.
    {
        Len--;
        selection_sort(Array, Len,TrueLen);
    }
}
int main()
{
    int array[100],Array,length=0;

    /*since there isn't a clear way to determine when the input will end,
    I used EOF to identify when the input end, so if TAs want to verify 
    the code by directing hand typing input into terminal, pls at the 
    end of the input,use Ctrl+Z to indicate that input is over. :D */
    while(scanf("%d",&Array)!= EOF) 
    {
        array[length]=Array;
        length++;
    }

    selection_sort(array,length,length);
}