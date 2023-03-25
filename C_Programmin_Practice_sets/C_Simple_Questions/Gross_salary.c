#include<stdio.h>
int main(){
  float s,b;
  printf("Enter Your salary: ");
  scanf("%f",&s);
  printf("Enter Your total Bonus salary: ");
  scanf("%f",&b);
  printf("Your Gross salary is: %.2f",s+b);  
  return 0;
}
