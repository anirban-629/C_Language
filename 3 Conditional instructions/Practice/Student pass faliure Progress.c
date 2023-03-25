//										 			 	Programme for students pass fail progress

//1

//#include<stdio.h>
//int main(){
//	int a;
//	int b;
//	int c;
//	printf("Your Physics percentage\n");
//	scanf("%d", &a);
//	printf("Your Chemistry percentage\n");
//	scanf("%d", &b);
//	printf("Your Mathematics percentage\n");
//	scanf("%d", &c);
//	printf("Total average percentage in this 3 subjects %d\n", (a+b+c)*100/300);
//    if((a+b+c)*100/300>=40){
//    	printf("You've passed the examintaion\n");
//	}
//	else{
//		printf("You didn't passed the examination");
//	}
//return 0;
//}

//2

#include<stdio.h>

int main(){
    int physics, chemistry, maths;
    float total;
    printf("Enter Physics Marks\n");
    scanf("%d", &physics);

    printf("Enter Chemistry Marks\n");
    scanf("%d", &chemistry);

    printf("Enter Maths Marks\n");
    scanf("%d", &maths);
    total = (physics + maths + chemistry)/3;
    if((total<40) || physics<33 || maths<33 || chemistry<33){
//if((total<40) || physics<33 || maths<33 || chemistry<33)-------------> o || is used as or.....
        printf("Your total percentage is %d and you are fail\n", total);
    }
    else{
        printf("Your total percentage is %d and you are pass\n", total);
    }
    return 0;
}
