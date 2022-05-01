#include<stdio.h>
void triangle( int sd1,int sd2,int sd3)
{
if (sd1+sd2>sd3 && sd3+sd2>sd1 && sd1+sd3>sd2 )
   {
   if(sd1==sd2 && sd1==sd3)
   {
       printf("Equilateral Triangle");
   }else if(sd1==sd2 || sd1==sd3|| sd2==sd3)
   {
        printf("Isosceles Triangle");
   }else if ((sd1*sd1) +(sd2*sd2)==(sd3*sd3) || (sd1*sd1) +(sd3*sd3)==(sd2*sd2)||(sd3*sd3) +(sd2*sd2)==(sd1*sd1))
   {
       printf("RightAngle Triangle");
   }else if(sd1!=sd3 && sd2!=sd3 && sd1!=sd2)
   {
       printf("Scalene Triangle");
   }
   }
   else
   {
       printf("Triangle is Not formed");
   }
}
int main()
{  int sd1,sd2,sd3;
   printf("Enter Sides of sides: ");
   scanf("%d %d %d",&sd1 ,&sd2, &sd3);
   triangle(sd1,sd2,sd3);
    return 0;
}