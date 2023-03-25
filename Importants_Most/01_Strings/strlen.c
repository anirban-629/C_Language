#include<stdio.h>
#include<string.h>
int main(){
  char arr[100];
  printf("Enter a sentence: ");
  gets(arr);
  printf("Numbers of words in the string: %d\n",strlen(arr));
  return 0;
}
