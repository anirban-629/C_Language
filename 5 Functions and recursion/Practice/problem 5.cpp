#include<stdio.h>
int main(){
	int a=4;
	printf("%d %d %d", a, ++a, a++);
//	                   <----------- Argument pass on this way right to left
//                                  OUtput --> 5, 5, 3           
return 0;
}

