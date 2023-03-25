//1.

//#include<stdio.h>
//int main(){
//	int n,i;
//	printf("Enter the Number\n");
//	scanf("%d", &n);
//	for(i=1; i<=10; ++i){
//		printf("%d X %d = %d\n", n, i, n*i);
//	}
//return 0;
//}


//2.

//#include<stdio.h>
//int main(){
//	int i;
//	for(i=10; i; i--){
//		printf("10 X %d = %d \n", i, 10*i);
//	}
//return 0;
//}


//5.

//1.........
//#include<stdio.h>
//int main(){
//	int i,  sum=0, n=10;
//	for(i=0; i<=n; i++){
//			sum+=i;
//	}
//	printf("The value of sum 1 to 10 is %d\n", sum);
//return 0;	
//}

																	//2..........
																	
																	//#include<stdio.h>
																	//int main(){
																	//	int i,  sum=0, n;
																	//	scanf("%d", &n);
																	//	for(i=0; i<=n; i++){
																	//			sum+=i;
																	//	}
																	//	printf("The value of sum of first n number is %d\n", sum);
																	//return 0;	
																	//}


//using while loop..........

//// 1.........
//#include<stdio.h>
//int main(){
//	int i=0,  sum=0, n=10;
//	while(i<=n){
//			sum+=i;
//			i++;
//	}
//	printf("The value of sum 1 to 10 is %d\n", sum);
//return 0;	
//}


//7........



//8........

#include<stdio.h>
int main(){
	int i=0, n, Factorial=1;
	printf("Enter the number\n");
	scanf("%d", &n);
	for(i=1;i<=n;i++){
		Factorial*=i;
	}
	printf("The value of the Factorial %d is %d", n, Factorial);
return 0;
}
