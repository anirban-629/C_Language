#include<stdio.h>
#include<string.h>
int main(){
  char arr1[100],arr2[100];
  printf("Enter a sentence to print it: ");
  gets(arr1);
  strcpy(arr2,arr1);
  printf("Your sentence is: %s\n",arr2);
  return 0;
}
