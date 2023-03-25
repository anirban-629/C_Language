#include<stdio.h>
#include<string.h>

int print_name();
	

int main(){
	int j=0,n;
	
	printf("How many names you need: ");
	scanf("%d",&n);
	
	for(j=0;j<n;j++){
	print_name();
	}
return 0;
}
int print_name(){
	int i=0,h,H;
	char a[20], b[20];
	
	printf("Enter name: ");
	scanf("%s",&a[i]);
	scanf("%s",&b[i]);

    printf("Dispaly Name: ");
    h=strlen(a);
    H=strlen(b);
    for(i=0;i<=h;i++)
    	printf("%c",a[i]);
	for(i=0;i<=H;i++)
	printf("%c",b[i]);

	printf("\n\n");

}


