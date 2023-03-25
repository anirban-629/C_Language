#include<stdio.h>
#include<string.h>
void swap(int *a,int *b);
int main(){
  int x,y;
  printf("Enter no. 1: ");
  scanf("%d",&x);
  printf("Enter no. 2: ");
  scanf("%d",&y);
  printf("Before swapping X=%d and y=%d\n",x,y);
  swap(&x,&y);
  printf("After swapping X=%d and y=%d\n",x,y);
  return 0;
}
void swap(int *a,int *b){
  int temp;
  temp=*a;
  *a=*b;
  *b=temp;
}
