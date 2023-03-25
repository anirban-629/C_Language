#include<stdio.h>
#include<string.h>
int main(){
	char str1[10],str2[10];
	printf("Enter your name: ");
	gets(str1);
	strcpy(str2,str1);
	//Here str2 is the target source where I've to store the str1
	printf("Your name is: ");
	puts(str2);
	return 0;
}
