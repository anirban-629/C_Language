#include<stdio.h>
#include<string.h>
int main(){
	char str[10];
	printf("Enter a word in capital letter: ");
	gets(str);
	strlwr(str);
	printf("Your word in small letter is: ");
	puts(str);
//	puts(strlwr(str));
	return 0
	;
}

