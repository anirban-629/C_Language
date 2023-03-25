#include<stdio.h>
#include<string.h>
int main(){
	char c;
	FILE *ptr;
	ptr=fopen("01_02_03_f(get(c,s),put(c,s)).txt","w");
	fputc('A',ptr);
	fputc('N',ptr);
	fputc('I',ptr);
	fputc('R',ptr);
	fputc('B',ptr);
	fputc('A',ptr);
	fputc('N',ptr);
	fclose(ptr);
	return 0;
}

