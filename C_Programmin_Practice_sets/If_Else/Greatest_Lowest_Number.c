#include<stdio.h>
int main(){
    int arr[100],n,i=0;
    printf("Enter how many numbers you want to add: \n");
    scanf("%d",&n);
    printf("Enter your numbers: \n");
    for (i = 0; i < n; i++) {
      printf("Number <%d>: ",i+1);
      scanf("%d",&arr[i]);
    }
    for ( i = 0; i < n; i++) {
      if(arr[i]>arr[0]){
        arr[0]=arr[i];
      }
    }
    printf("Greatest number is: %d\n",arr[0]);
    for ( i = 0; i < n; i++) {
      if(arr[i]<arr[0]){
        arr[0]=arr[i];
      }
    }
    printf("Lowest number is: %d",arr[0]);
  return 0;
}
