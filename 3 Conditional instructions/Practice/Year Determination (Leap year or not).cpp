//														  Find a leap year or not
                                                        
                                                        
#include<stdio.h>
int main(){
	int year;
	printf("Enter the year\n");
	scanf("%d", &year);
	if(year%4==0){
		printf("%d is a leap year\n", year);
	}
	else{
		printf("This is not a leap year\n");
	}
return 0;
}
