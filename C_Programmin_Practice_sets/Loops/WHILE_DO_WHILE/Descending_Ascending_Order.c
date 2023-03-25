#include <stdio.h>
int main (){
   int num[20];
   int i, j, a;
   printf("Enter  5 numbers \n");
   for (i = 0; i < 5; ++i)
      scanf("%d", &num[i]);
   for (i = 0; i < 5; ++i){
      for (j = i + 1; j < 5; ++j){
         if (num[i] > num[j]){
            a = num[i];
            num[i] = num[j];
            num[j] = a;
         }
      }
   }
   printf("The numbers in ascending order is:\n");
   for (i = 0; i < 5; ++i){
      printf("%d\n", num[i]);
   }
   for (i = 0; i < 5; ++i){
      for (j = i + 1; j < 5; ++j){
         if (num[i] < num[j]){
            a = num[i];
            num[i] = num[j];
            num[j] = a;
         }
      }
   }
   printf("The numbers in descending order is:\n");
   for (i = 0; i < 5; ++i){
      printf("%d\n", num[i]);
   }
return 0;
}
