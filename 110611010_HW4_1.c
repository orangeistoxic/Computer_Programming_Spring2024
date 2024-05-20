#include <stdio.h>
#include <string.h>

int main()
{
    char input[100];
    int note=0;  //determine wether put "," or not.
    fgets(input,sizeof(input),stdin);
    
    for(int i=0;i<=9;i++)
    {
        int count=0; 
        for(int j=0;j<sizeof(input);j++)
        {
            if(input[j]==48+i)
            {
                count++;
            }
            if(count>=2)  //if there is a duplicate number, then print it.
            {
                if (note)
                {
                    printf(",");
                }
                printf("%c",input[j]);
                
                note=1;
                count=0;
                break;
            }
        }
    }
}