#include <stdio.h>
#include <math.h>


int main(){
    int input,max2=0;
    scanf("%d", &input);
    while(1){
        int count2=0,isEven=1;
        int temp=input+1;
        while(isEven){
            if(temp%2==0){
                temp/=2;
                count2++;
            }else{
                isEven=0;
            }
        }
        if (count2>max2){
            max2=count2;
        }
        if(temp==1){
            printf("%d\n", max2);
            break;
        }else {
            input>>=1;
        }
    }
}