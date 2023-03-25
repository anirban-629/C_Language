#include<stdio.h>
int main(){
    FILE *ptr;
    char str[100];
    ptr=fopen("prctc.txt","r");
    fscanf(ptr, "%s", str);
    printf("My file : %s\n", str);
  return 0;
}
