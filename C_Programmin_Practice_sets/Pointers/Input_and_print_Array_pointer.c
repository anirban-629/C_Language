#include<stdio.h>
#include<string.h>
int main(){
  int i,arr[100],*ptr[100];
  printf("Enter 10 Numbers: \n");
  for(i=0;i<10;i++){
    scanf("%d",&arr[i]);
    ptr[i]=&arr[i];
  }
  printf("\nUsing pointer I'm printing the array elements");
  for ( i = 0; i < 10; i++) {
    printf("\n<%d> Element: %d\n",i+1,*ptr[i]);
  }
  return 0;
}
