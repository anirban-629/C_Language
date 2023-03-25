#include<stdio.h>
#include<string.h>
int main(){
	char c, str[100];
	FILE *ptr;
	ptr=fopen("01_02_03_f(get(c,s),put(c,s)).txt","r");
	fgets(str,5,ptr);
	printf("string: %s\n",str);
	fclose(ptr);
	return 0;
}

