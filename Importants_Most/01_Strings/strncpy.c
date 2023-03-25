#include<stdio.h>
#include<string.h>
int main(){
  char arr1[100],arr2[100],n;
  printf("Enter the string: \n");
  gets(arr1);
  printf("Enter the value of n to get the string till n: \n");
  scanf("%d",&n);
  // This is used to get the value till the n numbers..
  strncpy(arr2,arr1,n);
  printf("Sentences Till the %d numbers is: %s\n",n,arr2);
  return 0;
}
