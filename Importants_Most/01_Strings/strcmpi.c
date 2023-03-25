#include<stdio.h>
#include<string.h>
int main(){
  char arr1[100],arr2[100];
  printf("Enter 1st sentence: ");
  gets(arr1);
  printf("Enter 2nd sentence: ");
  gets(arr2);
// strcmp is a case sensitive keyword
  printf("strcmp:\n");
  if(strcmp(arr1,arr2)==0){
    printf("Same\n");
  }
  else{
    printf("Not same\n");
  }
// strcmpi is not a case sensitive
// Enter 2 Sentences same using small anf capital letter
printf("strcmpi:\n");

if(strcmpi(arr1,arr2)==0){
  printf("Same\n");
}
else{
  printf("Not same\n");
}
  return 0;
}
