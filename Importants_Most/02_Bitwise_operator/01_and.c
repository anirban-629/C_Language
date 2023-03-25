#include<stdio.h>
#include<string.h>
int main(){
  int a=10,b=15,c;
  c=a&b;
  printf("Value of C is: %d",c);
  return 0;
}

/*
Theory:

In binary values:
according to AND Truth Table..

            a=    1010
            b=    1111

Output->          1010 [Binary]
                  10   [Decimal]

*/
