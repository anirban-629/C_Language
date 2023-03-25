#include<stdio.h>
#include<string.h>
int main(){
 FILE *ptr=NULL;
 ptr=fopen("Prctc.txt","w");
 char str[100]="This is my practice set";
 fprintf(ptr,"%s",str);
 fclose(ptr);
 return 0;
}
