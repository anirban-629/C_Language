#include<stdio.h>
int main(){
	FILE *ptr=NULL;
	ptr=fopen("FILE.txt", "w+");
	fputc('O', ptr); 
	fputs("HELLO ANIRBAN", ptr);
	fclose(ptr);
return 0;
}

//w+ mode just add the content char or strings one by one  we have given here to that file
//it will clear all yjr first of the content and then it'll print that

