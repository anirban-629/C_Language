#include<stdio.h>
#include<string.h>
int main(){
  char c;
  FILE *ptr1,*ptr2;
  ptr1=fopen("abc.txt","r");
  ptr2=fopen("def.txt","a");
  c=fgetc(ptr1);
  while(c!=EOF){
    fprintf(ptr2,"%c",c);
    c=fgetc(ptr1);
  }
  fclose(ptr1);
  fclose(ptr2);
  printf("Process Done......\n");
  return 0;
}
