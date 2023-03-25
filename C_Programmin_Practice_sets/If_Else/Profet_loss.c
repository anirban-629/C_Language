#include<stdio.h>
int main(){
float am,re;
printf("Total amount from you: ");
scanf("%f",&am);
printf("You got in return from business: ");
scanf("%f",&re);
if(re>am){
  printf("PROFIT\n");
  printf("Your profit is: %.2f Rupees\n",(re-am));
  printf("Your profit in percentage is %.0f %% Rupees\n",((re-am)/am)*100);
}
else{
  printf("LOSS\n");
  printf("Your loss is: %.2f Rupees\n",(am-re));
  printf("Your loss in percentage is %.0f %% Rupees\n",((am-re)/am)*100);
}
  return 0;
}
