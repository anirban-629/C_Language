#include<stdio.h>
#include<string.h>
int main(){
	char c;
	FILE *ptr;
	ptr=fopen("01_02_03_f(get(c,s),put(c,s)).txt","w");
	fputs("ANIRBAN MISHRA",ptr);
	fclose(ptr);
	return 0;
}

