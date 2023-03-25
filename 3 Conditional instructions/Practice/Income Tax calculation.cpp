//														   Income tax calculation 2 types!!!!!!!!!!
//                                                                    process 1

#include<stdio.h>
int main(){
	int a;
	printf("Write down your annual income\n");
	scanf("%d", &a);
	if(a>=250000 && a<=499999){
		printf("You have to pay %d rupees\n",a*5/100);
	}
	else if(a>=500000 && a<=999999){
		printf("You have to pay %d rupees\n",a*10/100);
	}
	else if(a>=1000000){
		printf("You have to pay %d rupees\n",a*30/100);
	}
	else{
		printf("You don't need to pay any tax according to government rules");
	}
	
return 0;
}




//		                                                   			 process2
//#include<stdio.h>
//int main(){
//    float tax = 0, income;
//    printf("Enter your income\n");
//    scanf("%f", &income);
//
//    if(income>=250000 && income<=500000){
//        tax = tax + 0.05 * (income - 250000);
//    }
//    
//    if (income >= 500000 && income <= 1000000)
//    {
//        tax = tax + 0.20 * (income - 500000);
//    }
//
//    if (income >= 1000000)
//    {
//        tax = tax + 0.30 * (income - 1000000);
//    }
//    
//    printf("Your net income tax to be paid by 26th of this month is %f\n", tax);
//
//    return 0;
//} 
