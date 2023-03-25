#include<stdio.h>
#include<string.h>
int main(){
	char str1[10];
	printf("Enter a word: ");
	gets(str1);
	printf("Length of your name is: %d",strlen(str1));
	return 0;
}
