#include<stdio.h>
#include<ctype.h>
int main(){
char a;
printf("Enter a Character: \n");
scanf("%c",&a);
if(a>='a'&&a<='z'){
  printf("Lowecase\n");
}
else if(a>='A'&&a<='Z'){
printf("Uppercase\n");
}
else if(isdigit(a)){
  printf("Digit\n");
}
else{
  printf("Special Character\n");
}
  return 0;
}
