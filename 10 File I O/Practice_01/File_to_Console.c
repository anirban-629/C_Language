#include<stdio.h>
#include<string.h>
int main(){
  FILE *ptr;
  char c;
  ptr=fopen("abc_f_to_c.txt","r");
  c=fgetc(ptr);
  while(c!=EOF){
    printf("%c",c);
    c=fgetc(ptr);
  }
  fclose(ptr);
  return 0;
}
