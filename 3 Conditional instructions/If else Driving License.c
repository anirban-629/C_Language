//																				If else -----> Driving License
// One liner  if else code (Only for short type not goood for big programms)



//#include<stdio.h>
//int main(){
//int age;
//printf("Enter your age\n");
//scanf("%d", &age);
//if (age>=90){
//	printf("You are above 90, you cannot drive\n");
//}
//else{
//	printf("You can drive\n");
//}
//
//if (age==50){
//	printf("Half century\n");
//}
//return 0;
//}




//#include<stdio.h>
//int main(){
//int age;
//printf("Enter your age\n");
//scanf("%d", &age);
//if (age>=18 && age<=80){
//	printf("You are above 18 and below 80, you can drive\n");
//}
//else{
//	printf("You cannot drive\n");
//}
//
////if (age==50){
////	printf("Half century\n");
////}
//return 0;
//}

 
                                                                     //trying
                                                                                                                                     

#include<stdio.h>
int main(){
	int age;
	int vippass=0;
	vippass=10;
	printf("What is your age\n");
	scanf("%d", &age);
	
	if((age>=18 && age<=60) || !(vippass==10))      
	 //   ! makes opostie sns
	{
		printf("You can drive\n");
	}
    else{
    	printf("You cannot drive");
	}
return 0;
}

