// 																C programme to check for odd or even
//                                                                      (Not understood repeat)

#include<stdio.h>
int main(){
	int a;
	printf("Enter a number\n");
	scanf("%d", &a);                                                          
	if(a%2==0){
	printf("%d is even\n", a);
	}
//             signs------------->>>>  ==   -----> equal to
//                                     >=  ------> greater than equal to
//                                     <=  <  > 
//                                     !=   ------> not equalto                                         
	else{
	printf("%d is odd\n", a);
	}
	return 0;
}
