#include<stdio.h>
int main(){
char a;
printf("Enter a Character: \n");
scanf("%c",&a);
if((a>='a'&&a<='z') ||(a>='A'&&a<='Z')){
  printf("Your Character is an Alphabet\n");
}
else{
  printf("Your Character is not an Alphabet\n");
}
  return 0;
}
