//												    Determination of character lower case or not
 
#include<stdio.h>
int main(){
	char ch;
	printf("Enter the Character\n");
//	ASCII-------> Lower case=(a-z)=(97-122)
	scanf("%c", &ch);
	if(ch<=122 && ch>=97){
		printf("The number is lowercase");
	}
	else{
		printf("The number is not lower case");
	}
return 0;
}
