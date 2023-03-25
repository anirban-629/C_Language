#include<stdio.h>
#include <stdlib.h>
int main(){
  int ip1,ip2,ip3,ip4;
  ip1=rand()%1000+100;
  ip2=rand()%100+100;
  ip3=rand()%100;
  ip4=rand()%1000+100;
  printf("BASIC IPv4 ADDRESS -->> %d.%d.%d.%d",ip1,ip2,ip3,ip4);
  return 0;
}
