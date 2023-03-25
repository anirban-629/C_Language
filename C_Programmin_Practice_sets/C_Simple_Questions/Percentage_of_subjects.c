#include<stdio.h>
int main(){
int sum=0,marks[100],n,i,tot,rslt;
printf("Enter how many subjects you want to add: ");
scanf("%d",&n);
printf("Enter the total marks as per your input: ");
scanf("%d",&tot);
printf("Enter marks of <%d> subjects -->\n",n);
for (i=0;i<n;i++) {
printf("Enter sub %d ->: ",i+1);
scanf("%d",&marks[i]);
sum+=marks[i];
}
rslt=(sum/tot)*100;
 printf("Percentage of %d subjects are: %d ",n,rslt);
  return 0;
}
