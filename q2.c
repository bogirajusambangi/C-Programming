#include<stdio.h>
int set_bit( int a,int b)
{
    a=a|(1<<b);
    return a;

}
int rest_bit(int a,int b)
{
    a=a&(~(1<<b));
    return a;
}
int flip_bit(int a,int b)
{
    a=a^(1<<b);
    return a;
}
int qery_bit(int a,int b)
{
  a=a&(1<<b);
  if(a>=1)
  {
    return 1;
  }else
  {
   return 0;
  }

}
int main ()
{   int in;
    int num,pos;
    printf("Enter number:");
    scanf(" %X",&num);
    printf("Enter the pos:");
    scanf(" %d",&pos);
    printf("Enter 1 to set bit \n");
    printf("Enter 2 to reset bit \n");
    printf("Enter 3 to flip bit \n");
    printf("Enter 4 to query bit \n");
    scanf("%d",&in);
    switch(in)
    {
    case 1:
     printf("%X",set_bit(num,pos));
    break;
    case 2:
    printf("%X",rest_bit(num,pos));
    break;
    case 3:
    printf("%X",flip_bit(num,pos));
    break;
    case 4:
    printf("%X",qery_bit(num,pos));
    break;
    default :
    printf("Entered wrong input");

    }
    return 0;
    }