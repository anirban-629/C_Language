#include<stdio.h>
int fact(int x);
//int fact(int x){
//	int result;
//	if(x==1 || x==0){
//		return 1;
//	}	
//	else{
//		result=x*fact(x-1);
//		return result;
//	}
//}
int main(){
	int a;
	printf("Enter the number to get factorial: ");
	scanf("%d",&a);
	printf("Factorial %d is: %d",a,fact(a));
return 0;
}
int fact(int x){
	int result;
	if(x==1 || x==0){
		return 1;
	}	
	else{
		result=x*fact(x-1);
		return result;
	}
}

// Both are applicable
