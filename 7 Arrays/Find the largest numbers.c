#include<stdio.h>
int main(){
    int arr[10], a, i=0;
    printf("Enter the numbers of elements: ");
    scanf("%d", a);
    printf("Enter the numbers: ");
    for(i=0;i<a;i++){
    scanf("%d", &arr[i]);
}
    for(i=1;i<a;i++){
        if(arr[0]<arr[i]){
            arr[0]=arr[i];
        }
    }
    printf("Largest number is: %d", arr[0]);
    return 0;
}
