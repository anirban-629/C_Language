#include<stdio.h>
int main(){
	FILE *ptr=NULL;
	ptr=fopen("FILE.txt", "a+");
	fputc('O', ptr); 
	fputs("HELLO ANIRBAN", ptr);
	fclose(ptr);
return 0;
}

//a+ means append mode that add content just repeat run the program and you'll understand
//a+ mode add the content char or strings one by one  we have given here to that file
//it will not clear content it'll just start adding from the last of the content
//and it'll add the content how many times you will compile it'll print that same times

