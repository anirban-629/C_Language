#include<stdio.h>
int main(){
	int a,b,n;
	printf("Enter the length of one side: ");
	scanf("%d", &n);
	for(a=1;a<=n;a++){       //row line(1)
		for(b=1;b<=n;b++){  //coloumb line(2)
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}

//	Defination..
//
//	Afte putting the value it will enter th first for loop and initialized from 1 and then it check the condition if its true increment will be done 
//	after that it will enter the second loop and also here the same process as first one now here it will print that printf statement untill its 
//	condition become false when the condition become false it will exit the loop and the 1st for loop's printf statement will be printed then it will 
//	again go to the first loop to check its condition and on thats basis next iretaion will be executed thats all..
