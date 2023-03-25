#include<stdio.h>
#include<string.h>
int main(){
  char arr[100];
  printf("Enter: ");
  gets(arr);
  // it totally reverese the string try it using a particular word..
  printf("Using STRREV: %s",strrev(arr));
  return 0;
}
