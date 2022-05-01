#include<stdio.h>
int sumrang(int n)
{    int sum =0;
    for(int i=1;i<=n;i++)
    {
       sum +=i;
    }
    return sum;
}
int main()
{
    int i;
    printf("Enter the number ");
    scanf("%d",&i);
    printf("Sum = %d",sumrang(i));
}