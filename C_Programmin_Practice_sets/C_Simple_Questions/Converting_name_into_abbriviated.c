#include<stdio.h>
#include<string.h>
int main(){
    char fname[10],mname[10],lname[10];
    printf("Enter your First name: ");
    scanf("%s",&fname);
    printf("Enter your Middle name: ");
    scanf("%s",&mname);
    printf("Enter your Last name: ");
    scanf("%s",&lname);

    printf("Your name will be shown as %c. %c. %s",fname[0],mname[0],lname);
  return 0;
}
