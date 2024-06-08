#include <stdio.h>
#include <math.h>

int main(){
    int i,j;
    scanf("%d %d", &i, &j);
    int carry=i&j;
    while(carry!=0){
        carry = i & j;
        i=i^j;
        j=carry<<1;
        
    }
    
    printf("%d\n", i);
}