#include<stdio.h>
int prime(int num)
{    int count=0;
    for(int i=1;i<=num;i++)
   {
        if(num%i==0)
        count++;
   }
return count;
}
int main ()
{   int num;
   printf("Enter number to check wether prime or Not: ");
   scanf("%d",&num);
    int chk=prime(num);
   if(chk==2)
   {
       printf("Prime number");
   }
   else
   {
       printf("Not a prime number");
   }
    return 0;
}