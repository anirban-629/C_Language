
//                                                            	Quiz  (Successfully done just trythe amazing)         
														                               
#include<stdio.h>
int main(){
int Marks;
printf("Enter your Marks\n");
scanf("%d", &Marks);
	if(Marks>=90 && Marks<=100){
	printf("Your Grade is O\n");	
}
	else if(Marks>=80 && Marks<=89){
	printf("Your Grade is E\n");
}
	else if(Marks>=70 && Marks<=79){
	printf("Your Grade is A\n");
}
	else if(Marks>=60 && Marks<=69){
	printf("Your Grade is B\n");
}
	else if(Marks>=50 && Marks<=59){
	printf("Your Grade is C\n");
	}
	else if(Marks>=40 && Marks<=49){
			printf("Your Grade is D\n");
	}
	else if(Marks<40){
			printf("Your Grade is E\n");
		}
	else{
		printf("Your exam is incomplete");
	}
return 0;
}
						
				
//#include<stdio.h>
//int main(){
//int Grade;
//printf("Enter your Marks\n");
//scanf("%d", &Grade);
//switch(Grade){
//     	case(100):
//	printf("Your Grade is A\n");
//	    break;
//		case(90-99):
//	printf("Your Grade is B\n");
//		break;
//	default:
//	printf("Very Bad Marks Try again");
//}
//return 0;
//}																	

