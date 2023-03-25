#include<stdio.h>
#include<string.h>
int arr(int a[]){
  int i;
  for(i=0;i<4;i++){
    printf("%d",a[i]);
  }
}
int main(){
  int ar[]={1,2,3,4};
  arr(ar);
  return 0;
}
