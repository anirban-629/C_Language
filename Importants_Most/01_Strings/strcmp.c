#include<stdio.h>
#include<string.h>
int main(){
  char arr1[100],arr2[100];
  printf("Enter 1st sentence: ");
  gets(arr1);
  printf("Enter 2nd sentence: ");
  gets(arr2);
  if(strcmp(arr1,arr2)==0){
    printf("2 Sentences are same\n");
  }
  else{
    printf("Not same\n");
  }
  return 0;
}
