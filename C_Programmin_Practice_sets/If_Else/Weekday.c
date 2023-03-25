#include<stdio.h>
#include<string.h>
int main(){
char *(arr[7])={"Monday","Tuessday","Wednesday","Thrusday","Friday","Saturday","Sunday"};
int i=0,n;
printf("Enter the number of days you want to print: ");
scanf("%d",&n);
if(n>7||n<1){
  printf("A week contains 7 days");
}
for ( i = 0; i < n; i++) {
printf("Weekday <%d>: %s\n",i+1,arr[i]);
}
return 0;
}
