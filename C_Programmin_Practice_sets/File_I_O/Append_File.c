#include<stdio.h>
int main(){
  FILE *ptr=NULL;
  ptr=fopen("prctc.txt","a");
  char str[100] = "Here I'm appending content in file";
  fprintf(ptr,"%s",str);
  fclose(ptr);
  return 0;
}
