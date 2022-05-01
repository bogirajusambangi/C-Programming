#include<stdio.h>
int main ()
{  int num,x,sum;
   printf("Enter number to find digital root:");
   scanf("%d",&num);
   while(num!=0)
   {  sum=0;
      while(num!=0)
      {x=num%10;
      sum+=x;
      num=num/10;}
      if(sum>9)
      {
         num=sum;
      }
   }
   printf("Digital Root is: %d",sum);

    return 0;
}