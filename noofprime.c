#include<stdio.h>
int main()
{
   int Upperlimit,Lowerlimit,count,val=0;
   printf("Enter Lowerlimit and Upperlimit: ");
   scanf("%d %d",&Lowerlimit,&Upperlimit);
   for(int i=Lowerlimit;i<=Upperlimit;i++)
   {  count=0;
     for(int j=1;j<=i;j++)
     {   if(i%j==0)
          {count++;}
     }
     if(count==2)
     {
        val++;
     }
   }
   printf("No of prime numbers for given range is %d",val);
    return 0;
}