#include<stdio.h>
#include<string.h>
int main(){
	char str[100];
	FILE *ptr;
	gets(str);
	ptr=fopen("1_2_3_rwa.txt","w");
	fprintf(ptr,"%s",str);
	return 0;
}
