#include<stdio.h>
float Fahrenhite(int a);
int main(){
	float a;
	printf("Celcius ----> ");
	scanf("%f", &a);
	printf("Fahrenhite value ----> %f\n", Fahrenhite(a));
	return 0;
}
float Fahrenhite(int a){
float f;
 	f =(a*1.8)+32 ;
	return f;
}








