#include<stdio.h>
int main()
{    int num,x=0,y=1,z;
   printf("Enter the number:");
   scanf("%d",&num);
   for(int i=1;i<=num;i++)
   {
       printf("%d ",x);
       z=x+y;
       x=y;
       y=z;
   }
    return 0;
}