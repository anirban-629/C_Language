#include<stdio.h>
int main(){
int date,month,year,lyear,nlyear;
printf("Enter date: ");
scanf("%d",&date);
printf("Enter month: ");
scanf("%d",&month);
printf("Enter year: ");
scanf("%d",&year);
if (date<1 && date>31){
  printf("You entered a incorrect date");
}
if(month==2){
  if(date>29){
    printf("This date is incorrect as it's February");
  }
}
if(year%400==0){
  printf("Leap Year\n");
  year=lyear;
}
else if(year%100==0){
  printf("Not Leap Year\n");
  year=nlyear;
}
else if(year%4==0){
  printf("Leap Year\n");
  year=lyear;
}
if(nlyear&&date==29){
  printf("It's not leapyear that's why can't contain 29");
}
printf("Your date is : %d\%d\%d",date,month,lyear);
  return 0;
}
