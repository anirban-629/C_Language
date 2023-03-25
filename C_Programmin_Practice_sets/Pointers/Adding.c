#include<stdio.h>
#include<string.h>
int add(int *a, int *b);
int main(){
  int x,y;
  printf("Enter no. 1: ");
  scanf("%d",&x);
  printf("Enter no. 2: ");
  scanf("%d",&y);
  printf("Sum of These numbers are: %d",add(&x,&y));
  return 0;
}
int add(int *a, int *b){
  return *a+*b;
}
