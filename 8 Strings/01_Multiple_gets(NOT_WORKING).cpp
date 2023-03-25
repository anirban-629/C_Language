#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    int i, j;

        char *str[10];
        for(i=0; i<10; i++)
        {
            //gets(str[i]);
            scanf("%s",str[i]);
            if(str[i]=="man") break;
        }


        for(j=0; j<10; j++)
        {
            printf("%s\n",str[j]);
        }   

    return 0;
}
