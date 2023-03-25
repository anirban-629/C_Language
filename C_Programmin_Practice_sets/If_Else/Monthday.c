#include<stdio.h>
#include<string.h>
int main(){
char *(arr[12])={"January","February","March","April","May","June","July","August","September","October","November","December"};
int i=0,n;
printf("Enter the number of Month : \n");
scanf("%d",&n);
if(n>12||n<1){
  printf("Invalid Month\n");
}
printf("Your month is: %s\n",arr[n-1]);
if(n==2){
  printf("%s Contains 28 or 29 days as per leapyear or not..\n",arr[1]);
}
for ( i = 0; i < n; i++) {
if(n==0 || n==arr[i+2]){
  printf("31 days\n",n);
  break;
}
else if(n!=2||n!=0||n!=arr[i+2]){
  printf("30 days\n");
}
}
return 0;
}
