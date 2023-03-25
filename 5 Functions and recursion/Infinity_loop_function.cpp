#include<stdio.h>
#include<conio.h>
void italy();
void brazil();
void argentina();
int main(){
    printf("I'm in Main\n");
    italy();
    printf("I'm finally back in Main");
    return 0;
}
void italy(){
    printf("I'm in Italy\n");
    brazil();
    printf("I'm back in Italy\n");
}
void brazil(){
    printf("I'm in Brazil\n");
    argentina();
}
void argentina(){
    printf("I'm in Argentina\n");
    italy();
}

