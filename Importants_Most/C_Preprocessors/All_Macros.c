#include<stdio.h>
#include<string.h>
int main(){
  printf("Date: %s\n",__DATE__);
  printf("TIME: %s\n",__TIME__);
  printf("LINE: %d\n",__LINE__);
  printf("FILE: %s\n",__FILE__);
  printf("ANSI: %d\n",__STDC__);
  printf("ANSI: AMERICAN NATIONAl STANDARD INSTITUTE");
  return 0;
}
