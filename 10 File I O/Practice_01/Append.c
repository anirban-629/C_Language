#include<stdio.h>
#include<string.h>
int main(){
  FILE *ptr;
  ptr=fopen("Checking_Writing_mode","a");
  char arr[]="My name is Anirban Mishra,\nI'm from Burdwan";
  fprintf(ptr,"%s\n",arr);
  fclose(ptr);
  printf("Process Completed...");
  return 0;
}
