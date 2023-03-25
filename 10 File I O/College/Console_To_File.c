#include<stdio.h>
#include<string.h>
int main(){
  char arr[100];
  FILE *ptr;
  ptr=fopen("abc.txt","r");
  printf("Enter your Name: ");
  gets(arr);
  fprintf(ptr,"%s",arr);
  fclose(ptr);
  return 0;
}
