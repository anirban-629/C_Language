#include<stdio.h>
//#include<conio.h>
//#include<string.h>
#include<stdlib.h>
//#include<math.h>
#include<time.h>
int main(){
	int number;
	srand(time(0));
	number= rand()%100+1; // this will print a number between 1 to 100 
//use GDB Compiler its not working properly in dev c++ 
	printf("The number is : %d", number);
return 0;
}

