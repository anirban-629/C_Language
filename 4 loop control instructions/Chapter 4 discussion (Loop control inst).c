//                                                              Introduction

// #include<stdio.h>
// int main(){
//	printf("Hello ");
//	printf("world\n");
//	int a=1;
//	printf("%d\n", a);
//	a++;
//	printf("%d\n", a);
//	a++;
//	printf("%d\n", a);
//	a++;
//	printf("%d\n", a);
//	a++;
//	printf("%d\n", a);
//	a++;
//	printf("%d\n", a);
//	a++;
//	printf("%d\n", a);
//	a++;
//	printf("%d\n", a);
//	a++;
//	printf("%d\n", a);
//	a++;
//	printf("%d\n", a);
//	printf("successful");
// return 0;
// }

// Output---------> Hello world
//                   1
//                   2
//                   3
//                   4
//---------------------------------------------------------------------------------------------------------------------------
//---------------------------------------------------------------------------------------------------------------------------
//                                                        <--------loop-------->
//  					 								Same thing repeat again and again
//                                                   and again how many time we want
//                                                               1. while     loop
//                                                               2. do while  loop
//                                                               3. for       loop

// 1. While    --> Checks the condition and then executes the code
// 2. Do-While --> Executes the code and then checks the condition
//             :-> Do-While loop = While loop which executes at least once

//---------------------------------------------------------------------------------------------------------------------------
//---------------------------------------------------------------------------------------------------------------------------

//		1----------------> """"""""""""""while loop"""""""""""""""

//                    Main structure:
//					while(Condition is true) {                  ----> The blocks repears executing as
//					-->	code   									----> long as as the condition is true
//					-->	code
//					}

//		Programme --> "type 1"
// "type 1"

// #include<stdio.h>
// int main(){
//	int a;
//	printf("Your number ------>>>> ");
//	scanf("%d", &a);
//	while(a<10){
//		printf("%d\n", a);
//		a++;
//	}
// return 0;
// }

//"type 2"

// #include<stdio.h>
// int main(){
//	int a;
//	printf("Your number ------>>>> ");
//	scanf("%d", &a);
//	while(a>10){       --------> infinite loop
//		printf("%d\n", a);
//		a++;
//	}
// return 0;
// }

//"type 3" quiz

// #include<stdio.h>
// int main(){
//	int a=0;
//	while(a<=20){
//		if(a>=10){
//	printf("The value of a is %d\n", a);
//	}
//	a++;
//					 a++  ------>a+1
//					 a--  ------>a-1
// }
// return 0;
// }

//															increament decreament

//                               increament ---->

//            <a/b/c>++; --------> 1st-> print then Increment
//			  ++<a/b/c>; --------> 1st-> increment then print
// important ----> a+=, a-=, a*=, a/=, a%=,

// #include<stdio.h>
// int main(){
//	int a=5;
//	printf("The value after a++ is %d\n", ++a);
////	a+=10;
//// 	a-=10;
////	a*=10;
////    a/=10;
////	a%=10;
//	printf("The value of a is %d\n", a);
// return 0;
//}

//                                Decrement ---->

//            <a/b/c>--; --------> 1st-> print then decrement
//			  --<a/b/c>; --------> 1st-> decrement then print

// #include<stdio.h>
// int main(){
//	int a=5;
//	printf("The value after a++ is %d\n", --a);
////	a+=10;
//// 	a-=10;
////	a*=10;
////    a/=10;
////	a%=10;
//	printf("The value of a is %d\n", a);
// return 0;
//}

//---------------------------------------------------------------------------------------------------------------------------
//---------------------------------------------------------------------------------------------------------------------------

// 2------------------->                        """"""""""""""""Do-While loop"""""""""""""""""

// structure----->
//															#include<stdio.h>
//															int main(){
//																int a=0;
//																do{
//
//																}while(condition);
//															return 0;
//															}

// programme 1.

#include <stdio.h>
int main()
{
	int a = 0;
	do
	{
		printf("The value of a is %d\n", a);
		a++;
	} while (a <= 4);
	return 0;
}

// Quiz

// #include<stdio.h>
// int main(){
// int a=0;
// int n;
// printf("Enter the value of n\n");
// scanf("%d", &n);
//	do{
//	printf("The value of n is %d\n", a+1);
//	a++;
//    }while(a<n);
// return 0;
// }

//---------------------------------------------------------------------------------------------------------------------------
//---------------------------------------------------------------------------------------------------------------------------

// 3--------------->>>>>>>>>                              """"""""""""For loop""""""""""

//														Syntex----->(struct)
//														for(initialige; condition test; increment/decrement)
//														{
//															code;
//															code;
//															code;
//														}

//			Increment------------------->

// #include<stdio.h>
// int main(){
//	for(int a=0; a<10; a++){
//		printf("THe value of a is %d\n", a);
//	}
// return 0;
// }

// Quizz::::--->

//			Decrement-------------------->

// #include<stdio.h>
// int main(){
//	for(int a=5; a; a--){
//		printf("THe value of a is %d\n", a);
//	}
// return 0;
// }

// Quizz::::--->

// rverse order:::

// #include<stdio.h>
// int main(){
//	int n;
//	printf("Enter the value of n\n");
//	scanf("%d", &n);
//	int i;
//	for(i=n; i; i--){
//		printf("The value of n is %d\n", i);
//	}
// return 0;
// }

//---------------------------------------------------------------------------------------------------------------------------
//---------------------------------------------------------------------------------------------------------------------------

//					Break Statement:::::------->

//---------------->(While/Do while/For)

//	Break ----------> stop the programme

//	Exmpl------->

// 1.

// #include<stdio.h>
// int main(){
// int a=0;
//	do{
//	printf("The value of a is %d\n", a);
//	if(a==4){
//		break;
//	}
//	a++;
//    }while(a<=4);
// return 0;
// }

// 2.

// #include<stdio.h>
// int main(){
//	int a;
//	printf("Your number ------>>>> ");
//	scanf("%d", &a);
//	while(a<10){
//		printf("%d\n", a);
//		if(a==4){
//			break;
//		}
//		a++;
//	}
// return 0;
// }

// 3.

// #include<stdio.h>
// int main(){
//	for(int a=0; a<10; a++){
//		if(a==5){
//			break;
//		}
//		printf("THe value of a is %d\n", a+1);
//	}
// return 0;
// }

//---------------------------------------------------------------------------------------------------------------------------
//---------------------------------------------------------------------------------------------------------------------------

//                                             :::::::Continue statement:::::::

// #include<stdio.h>
// int main(){
//	int skip=5;
//	int a;
//	printf("The value\n");
//	scanf("%d", a);
//	while(a<10){                                //Output--> 5
//	a++;
////				!=   ----> Not equals to..
//	if(a!=skip)
//	continue;
//	else{
//		printf("%d\n", a);
//	}
//  }
// return 0;
//}

//
// #include<stdio.h>
// int main(){
// for(int a=0; a<10; a++){
//		printf("THe value of a is %d\n", a);
//	}
// return 0;
//}
