#include<stdio.h>
int main(){
	FILE *ptr=NULL;
	ptr=fopen("New Text Document.txt", "r");
	char c=fgetc(ptr);
	printf("The 1st character I read was: %c\n",c);
	c=fgetc(ptr);
	printf("The 2nd character I read was: %c\n",c);
	fclose(ptr);
return 0;
}


//used to read characters like this way you can read one by one character of the file
//but if you don't declare the c in the next then it'll show the same character
