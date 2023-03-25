#include<stdio.h>
int main(){
	FILE *ptr=NULL;
	ptr=fopen("New Text Document.txt", "r");
	char str[10];
	fgets(str,5,ptr);				
// here first is the target source to store the string and 5 is the length and ptr is the location of the file...
//now according to the length if n is length then (n-1) characters will be printed beacuse one of the character is null character
//that is the reason behind printing four character..
	printf("String is : %s\n",str);
//output-> "Hi I" length four
	fclose(ptr);
return 0;
}
