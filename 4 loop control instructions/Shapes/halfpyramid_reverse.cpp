#include<stdio.h>
int main(){
	int a,b,n;
	printf("Enter the length of row: ");
	scanf("%d", &n);
	for(a=1;a<=n;a++){       
		for(b=5;b>=a;b--){  
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}

//Defination..

//		assume n=5

//		when the value of a is 1 at first for loop then it will proceed to next loop and here the value of b is initialized from 5 and the
//		value of b may be greater than a(b>a) or equals to a(b=a) but not will be less than a thats why untill the value of b becomes equals
//		to a it will be printed now here at first b=1 thats why form the initializing point to the value of a thats between value will be printed that
//		means 5 stars will be printed and next it will proceed and again after executing the first for's  printf it will again go to the first for 
//		condition and execute for the next value of b where b is 2 then it will go to next and there also b is initialized from 5 and upto 2 thats mean
//		3 * will be printed.
