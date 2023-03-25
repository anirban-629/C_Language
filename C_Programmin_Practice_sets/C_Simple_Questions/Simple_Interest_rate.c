#include<stdio.h>
int main(){
float amount,i;
printf("Enter Your amount : ");
scanf("%f",&amount);
printf("Enter the interest rate: ");
scanf("%f",&i);
printf("Your interest rate is : %.2f Percent",i);
printf("\nYour interest rate is: %.2f",amount*i/100);
  return 0;
}
