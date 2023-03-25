#include<stdio.h>
#include<math.h>
int main(){
  int a;
  printf("What do you want\n1 for Radius\n2 for Circumference\n3 for volume\n");
  printf("\nEnter-->> ");
  scanf("%d",&a);
  switch (a) {
    case 1:
    {
      int n;
      float cir,area;
      printf("\nWhat do you want to input\n4 for Circumference\n5 for area\n6 for Volume");
      printf("\nEnter-->> ");
      scanf("%d",&n);
      switch (n) {
        case 4:
        {
          // int n,cir,area;
          printf("\nEnter the Circumference: ");
          scanf("%f",&cir);
          printf("Radius = %.1f",cir/(2*3.14));
          break;
        }
        case 5:
        {
          // int n,cir,area;
          printf("Enter the Area: ");
          scanf("%f",&area);
          printf("Radius = %.1f",sqrt(area/3.14));
          break;
      }
        case 6:
        {
          float vol,h;
          printf("Enter the Volume: ");
          scanf("%f",&vol);
          printf("Enter the Height: ");
          scanf("%f",&h);
          printf("Radius = %.1f",sqrt(vol/(3.14*h)));
          break;
        }
      default:
      printf("You entered wrong input");
      break;
    }
    break;
  }
      case 2:
      {
        float r;
        printf("Enter the Radius: ");
        scanf("%f",&r);
        printf("Circumference = %.1f",2*3.14*r);
        break;
      }
      case 3:
      {
        float h,r;
        printf("Enter Radius: ");
        scanf("%f",&r);
        printf("Enter Height: ");
        scanf("%f",&h);
        printf("Volume = %.1f",3.14*r*r*h);
        break;
      }
      default:
      printf("Invalid Input");
      break;
  }
  return 0;
}
