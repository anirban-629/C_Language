#include<stdio.h>
//#include<conio.h>
//#include<string.h>
#include<stdlib.h>
//#include<math.h>
#include<time.h>
int main(){
	int number;
	srand(time(0));
	number= rand();
	printf("The number is : %d", number);
return 0;
}

