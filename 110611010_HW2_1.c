#include<stdio.h>

int main()
{
    int num,den;
    
    scanf("%d/%d",&num,&den);
    for(int i=2;i<=num;i++)  //check the common factor one by one, until i is bigger than numerator.
    {
        if(num%i==0 && den%i==0)
        {
            num=num/i;
            den=den/i;
            i=1;            //If found a common factor ,than reset the i in case might contain multiple same common factor.
                            //Although here i=1,but every loop start i will plus 1,so in conclusion i will reset as 2.
        }
    }
    printf("%d/%d",num,den);
    
}