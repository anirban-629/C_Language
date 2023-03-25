#include<stdio.h>
int main(){

int num,rem,rev_num=0;
printf("Enter the Number: ");
scanf("%d",&num);

do{

  rem = num%10;
  rev_num = rev_num*10 + rem;
  num = num/10;

}while(num!=0);

  printf("Reverse Number is: %d",rev_num);

  return 0;
}
