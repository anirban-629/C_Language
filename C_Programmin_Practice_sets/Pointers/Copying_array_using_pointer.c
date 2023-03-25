#include<stdio.h>
#include<string.h>
int main(){
  int arr1[10],arr2[10],*ptr[10],i;
  printf("Enter 5 Numbers: \n");
  for(i=0;i<5;i++){
    scanf("%d",&arr1[i]);
    ptr[i]=&arr1[i];
  }
  for(i=0;i<5;i++){
    arr2[i]=*ptr[i];
  }
  for(i=0;i<5;i++){
    printf("Element %d = %d\n",i+1,arr2[i]);
  }
  return 0;
}
