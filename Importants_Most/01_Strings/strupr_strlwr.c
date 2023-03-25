#include<stdio.h>
#include<string.h>
int main(){
  char arr[100];
  printf("Enter a sentence mixed in capital and lower in order: ");
  gets(arr);
  printf("Using STRLWR: %s\n",strlwr(arr));
  printf("Using STRUPR: %s",strupr(arr));
  return 0;
}
