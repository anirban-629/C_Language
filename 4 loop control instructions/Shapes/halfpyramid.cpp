#include<stdio.h>
int main(){
	int a,b,n;
	printf("Enter the length of row: ");
	scanf("%d", &n);
	for(a=1;a<=n;a++){       
		for(b=1;b<=a;b++){  
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}

//for definationo go to the reverse half pyramid 
//you will get your answer and confusion clearance.
