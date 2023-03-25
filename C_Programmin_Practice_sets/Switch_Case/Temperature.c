#include<stdio.h>
int main(){
    int f,c,a,temp;
    printf("For Centigrade to Fahrenheit press 1\n");
    printf("For Fahrenheit to Centigrade press 2\n");
    printf("Enter-> ");
    scanf("%d",&a);
    printf("Enter Temperature: ");
    scanf("%d",&temp);
    switch(a){
      case 1:
      {
        printf("Centigrade to Fahrenheit: %.2f",(temp*1.8)+32);
        break;
      }
      case 2:
      {
        printf("Fahrenheit to Centigrade: %.2f",(temp-32)/1.8);
        break;
      }
      default:
      printf("You selected wrong input");
      break;
    }
  return 0;
}
