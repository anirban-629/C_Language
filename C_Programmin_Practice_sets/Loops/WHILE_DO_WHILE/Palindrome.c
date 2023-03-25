#include<stdio.h>
int main(){
int num,rem,rev_num=0,num1;
printf("Enter the Number: ");
scanf("%d",&num);
num1=num;
while(num!=0){
  rem = num%10;
  rev_num = rev_num*10 + rem;
  num = num/10;
}
printf("Reverse number: %d\n",rev_num);

if(num1==rev_num){
  printf("This is a Palindrome\n");
}
else{
  printf("This is not a Palindrome\n");
}
  return 0;
}
