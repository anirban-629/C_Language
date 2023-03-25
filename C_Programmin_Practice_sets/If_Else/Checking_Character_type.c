#include<stdio.h>
#include<ctype.h>
int main(){
  char a;
  printf("Enter: ");
  scanf("%c",&a);
  if(a>='0'&&a<='9'){
    printf("You entered Digit\n");
  }
  else if((a>='a'&&a<='z')||(a>='Z'&&a<='Z'))
  printf("You entered Character\n");
  else
  printf("You entered Special Character\n");
  return 0;
}
