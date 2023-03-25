#include<stdio.h>
#include<string.h>
int main(){
  char arr1[100],arr2[100];
  printf("Enter sentence 1: ");
  gets(arr1);
  printf("Enter sentence 2: ");
  gets(arr2);
  printf("Your sentence become this: %s",strcat(arr1,arr2));
  return 0;
}
