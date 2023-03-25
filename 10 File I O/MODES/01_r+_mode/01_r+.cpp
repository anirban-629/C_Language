#include<stdio.h>
int main(){
	FILE *ptr=NULL;
	ptr=fopen("r+.txt", "r+");
	fputc('O', ptr);
	fputs("HELLO ANIRBAN", ptr);
	fclose(ptr);
return 0;
}

//r+ mode just add the content char or strings we have given here to that file
//it will add at first of the file content and others of the file will remain
//unchanged
