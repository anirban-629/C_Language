#include<stdio.h>
int main(){
	int a,b,sum=0; 
	printf("Enter a number: ");
	scanf("%d", &a);
	while(a>0){  		//	a>0 beacuse when the value of a becomes 0 it will terminate
	
		b=a%10; 		//	that means from that we will get the remainder if a = 1234 ther at first the remainder will be 4/ b=4
		
		sum=sum*10 + b;	//	at fist sum = 0 thats why if you multiply with 10 then it is 0 at first time no2 +b means the remainder will be added/ sum=4 now 
		
		a=a/10;		 	//	now if the value of a is 1234 then in first run of while loop that means a=1234/10 now a=123 it will go to the begining and again run

//like that it will again return to the first and after that value of a is 123 now at second then 12 then 1 and after 1 the condition is coming 0>0 means terminate	

	}
	printf("The reverse number is: %d", sum);
return 0;
}

