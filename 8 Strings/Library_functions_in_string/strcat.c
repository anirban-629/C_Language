#include<stdio.h>
#include<string.h>
int main(){
	char str1[10],str2[10];
	printf("Enter 1st word: ");
	gets(str1);
	printf("Enter 2nd word: ");
	gets(str2);
	printf("Your have written : \n");
	puts(strcat(str1,str2));
	return 0;
}
