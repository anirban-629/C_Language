#include<stdio.h>
int main(){
char a;
printf("Enter a Character: \n");
scanf("%c",&a);
if(a=='a' || a=='e' || a=='i' || a=='o' || a=='u' ){
  printf("Your Character is a Vowel\n");
}
else if( a=='A' || a=='E' || a=='I' || a=='O' || a=='U'){
  printf("Your Character is a Vowel\n");
}
else{
  printf("Your Character is a Consonent");
}
  return 0;
}
