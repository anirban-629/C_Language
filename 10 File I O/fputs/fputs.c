#include<stdio.h>
int main(){
	FILE *ptr=NULL;
	ptr=fopen("New Text Document.txt", "w"); //here w have to use write mode beacuse it's for writing related
//	in case of fputs also the initial file of that document will be cleared then the new string will be printed
	fputs("HELLO ANIRBAN", ptr);
//	this is to store strings
	fclose(ptr);
return 0;
}
