#include<stdio.h>
int main(){
	int a,b,c,sum=0; 
	printf("Enter a number: ");
	scanf("%d", &a);
	c=a;
	while(a>0){  		
		b=a%10; 	
		sum=sum*10 + b;			
		a/=10;
	}
	printf("The reverse number is: %d\n", sum);
	if(c==sum){
		printf("The number * %d * is a palindrome.\n", c);
	}
	else{
		printf("The number * %d * is not a palindrome.\n", c);
	}
return 0;
}



