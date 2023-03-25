#include<stdio.h>
int main(){
	FILE *ptr=NULL;
	ptr=fopen("New Text Document.txt", "w"); //here we have to use write mode beacuse it's for writing related
//	in case of fputc the initial file of that document will be cleared then the new character will be printed
	fputc('d',ptr);
	fputc('e',ptr);
//	this is to store characters
	fclose(ptr);
return 0;
}
