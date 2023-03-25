// #include<stdio.h>
// int main(){
// int a;
// printf("Enter a number: ");
// scanf("%d\n",&a);
// if(a>0){
//   printf("%d is positive number.\n",a);
// }
// else if(a=0)
// {
//   printf("%d is Zero.\n",a);
// }
// else{
// printf("%d is a negative NUmber",a);
// }
//   return 0;
// }
#include <stdio.h>

int main()
{
  int number;

  printf("Enter any number:\n");
  scanf("%d",&number);

  if (number >= 0)
  {
    if (number > 0)
      printf("%d is Positive Number", number);
    else
      printf("You have entered Value zero.");
  }
  else
    printf("%d is Negative Number", number);

 return 0;
}
