#include<stdio.h>
int leapyear(int year)
{   if(year%100==0)
    {
        if(year%400==0)
        {
            return 1;
        }
    }else if (year%4==0)
    {
        return 1;
    }

}
int main ()
{
    int n;
    printf("enter the year to check it is leap year ot Not:");
    scanf("%d",&n);
    int check=leapyear(n);
     if(check==1)
     {
         printf("Leap Year");
     }
     else
     {
         printf(" Not Leap Year");
     }
    return 0;

}