// Length of a integer input using while loop
#include<stdio.h>
int main(){
int len,num1,num,rem,n,i=0;
printf("Enter a number: ");
scanf("%d",&n);
printf("You entered: %d\n",n);
while(n!=0){
rem=n%10;
n=n/10;
len=i+1;
i++;
  }
  printf("Length of the number is: %d",len);
  return 0;
}
