#include<stdio.h>
#include<string.h>
int main(){
	char str1[10],str2[10];
	printf("Enter 1st word: ");
	gets(str1);
	printf("Enter 2nd word: ");
	gets(str2);
	
	if(strcmp(str1,str2) == 0){
		printf("Your 2 words are equal\n");
	}
	else{
		printf("Your 2 words are not equal\n");
	}
//	int difference = strcmp(str1,str2);
	printf("Difference value of this two words is: %d",strcmp(str1,str2));
	return 0;
}
