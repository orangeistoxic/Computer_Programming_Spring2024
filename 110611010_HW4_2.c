#include <stdio.h>
#include <string.h>

int main()
{
    char text[100];
    scanf("%s",text);
    char OldLtr[6]={'A','B','E','I','O','S'};
    char NewLtr[6]={'4','8','3','1','0','5'};

    for(int i=0;i<=sizeof(text);i++)  //if letter is lower-case letter,then convert it into upper-case.
    {
        if(text[i]>=97 && text[i]<=121)
        {
            text[i]=text[i]-32;
        }

        for(int j=0;j<=5;j++) //find out if the letter is matching any letter in out Array,if found a match,then convert it. 
        {
            if(text[i]==OldLtr[j])
            {
                text[i]=NewLtr[j];
                break;      
            }
        }
    }

    printf("%s!!!!!!!!!!\n",text);

}