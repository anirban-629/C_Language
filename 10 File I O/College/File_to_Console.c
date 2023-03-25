#include<stdio.h>
#include<string.h>
int main(){
  char arr;
  FILE *ptr;
  ptr=fopen("abc.txt","r");
  arr=fgetc(ptr);
  //This should be written because if there is nothing in the file then there is a chance to go in infinite run
  while(arr!=EOF){
    printf("%c",arr);
    arr=fgetc(ptr);
  }
  fclose(ptr);
  return 0;
}
