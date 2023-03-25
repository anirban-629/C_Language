#include<stdio.h>
int main(){
  float c;
    printf("Enter Temperature in Celcius: ");
    scanf("%f",&c);
    printf("%.2f degree Celcius = %.2f degree Farhenhite",c,c*1.8+32);
    //f=c*1.8+32 -->> General Formula
    return 0;
  }
