#include<stdio.h>
#include<string.h>
int main(){
	char str[10];
	printf("Enter a word in small letter: ");
	gets(str);
//	printf("Your word in capital letter is: %s", strupr(str));
	puts(strupr(str));
	return 0
	;
}

