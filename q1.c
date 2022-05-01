#include<stdio.h>
int main ()
{   static int k;
    int i,j;
    while(1)
    { printf("Enter 0 to Press Switch: ");
      scanf("%d",&i);
      printf("Enter 1 to Release Switch: ");
      scanf("%d",&j);
      k+=j;
      if(k%2!=0)
      {
        printf("LED is ON\n");
      }
      else
      {
        printf("LED is OFF\n");
      }

    }
    return 0;
}