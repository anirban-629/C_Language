#include<stdio.h>
#include<string.h>
int main(){
	char c;
	FILE *ptr;
	ptr=fopen("01_02_03_f(get(c,s),put(c,s)).txt","r");
	c=fgetc(ptr);
	printf("1st char: %c\n",c);
	c=fgetc(ptr);	
	printf("2nd char: %c",c);
	fclose(ptr);
	return 0;
}

