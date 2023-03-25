#include <stdio.h>
int main(){
    int r,c,n;
    printf("Enter the pattern size: ");
    scanf("%d", &n);
    
// Condition for a X shape is r==c and r+c==n+1 => c==n-r+1

    for(r=1;r<=n;r++){
        for(c=1;c<=n;c++){
             if(r==c || c==n-r+1){
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

