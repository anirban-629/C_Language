#include<stdio.h>
#include<string.h>
int main(){
	char str[100];
	FILE *ptr;
	gets(str);
	ptr=fopen("rwa.txt","a");
	fprintf(ptr,"%s",str);
	return 0;
}
