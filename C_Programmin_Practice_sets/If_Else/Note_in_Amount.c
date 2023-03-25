#include<stdio.h>
int main(){
  int amnt,not;
  printf("Enter Your Amount: ");
  scanf("%d",&amnt);
  printf("Enter the Note value: ");
  scanf("%d",&not);
  printf("There can be %d %d rupees notes. ",amnt/not,not);
  if(amnt%not!=0){
    printf("And remaining is %d Rupees",amnt%not);
  }
  return 0;
}
