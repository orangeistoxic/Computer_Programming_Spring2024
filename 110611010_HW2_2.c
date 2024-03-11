#include<stdio.h>
#include<math.h>

int main()
{
    int max,i=2,sqrt;
    scanf("%d",&max);

    while(1)    //keep looping until result are bigger than max.
    {
        sqrt=pow(i,2);      
        if(sqrt<=max && sqrt%2==0)
        {
            if(sqrt!=4)                //Since the first correct Output must be 4,I can use that to indicate whether to put comma or not.
            {
                printf(",");
            }

            printf("%d", sqrt);
        }
        else if(sqrt>max)            
        {
            printf("\n");
            break;
        }
        i++;
    }

}