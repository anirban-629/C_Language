#include <stdio.h>
int main(){
    int r,c,n;
    printf("Enter the pattern size: ");
    scanf("%d", &n);
    for(r=1;r<=n;r++){
        for(c=1;c<=n;c++){
             if(r==c){
                 printf("x");
            }
            else{
                printf(" ");
//                printf("o");
            } 
        }
        printf("\n");
    }
    return 0;
}

