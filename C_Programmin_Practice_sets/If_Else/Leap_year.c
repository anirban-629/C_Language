#include<stdio.h>
int main(){
  int year;
  printf("Enter a year: ");
  scanf("%d",&year);
  if(year%400==0){
    printf("Leap Year\n");
  }
  else if(year%100==0){
    printf("Not Leap Year\n");
  }
  else if(year%4==0){
    printf("Leap Year\n");
  }
  return 0;
}
