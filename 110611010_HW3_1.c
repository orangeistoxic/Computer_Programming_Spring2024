#include <stdio.h>
#include <string.h>

int main()
{
    char str[500];
    float counter=1;        //number of space =number of words + 1 
    float alp=0;            //count individual letter.
    fgets(str,sizeof(str),stdin);
    for(int i=0;i<sizeof(str);i++)
    {
        if(str[i]!=' ' && str[i]!='.')
        {
            alp+=1;
        }
        else if(str[i]=='.')    //if str[i]=='.' ,it mean the sentence is over.
        {
            alp+=1;
            break;
        }
        else
        {
            counter+=1;
        }
    }
    float avg=alp/counter;
    printf("%.1f",avg);
    
}
