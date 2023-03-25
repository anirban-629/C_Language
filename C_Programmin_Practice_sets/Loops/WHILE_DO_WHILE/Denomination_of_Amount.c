#include<stdio.h>
int main(){
	int n,a=0,b=1,c,i=0,sum=0;
	long int arr[4000000];
	arr[0]=a;
	printf("The nth Fibonacci number to get fibanocci series---->>>> ");
	scanf("%d", &n);
	printf("Your Fibonacci Series upto %d is\n",n);
	for ( i = 1; i <=n; i++) {
	printf("%d\n",a);
	arr[i]=a;
	c=a+b;
	a=b;
	b=c;
	}
	 for ( i = 1; i <=n; i++){
		 if(arr[i]%2==0){
			 sum+=arr[i];
		 }
	 }
	 printf("Sum of the even numbers in Fibonacci series is %d\n",sum);
return 0;
}
