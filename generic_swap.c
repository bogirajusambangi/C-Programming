#include<stdio.h>

void swap(void*p1,void*p2,int size)
{
     char temp;
     char *ptr=(char*)p1;
     char *ptr2=(char*)p2;

    for(int i=0;i<size;i++)
    {
       temp=ptr[i];
       ptr[i]=ptr2[i];
       ptr2[i]=temp;
    }
}
int main ()
{
    int a=10,b=8;
    float c=9.9,d=3.7;
    char e='A',f='B';
    int a1[2]={1,2},b1[2]={3,4};
    swap(&a,&b,sizeof (a));
    printf("%d %d\n ",a,b);

    swap(a1,b1,sizeof (a1));
    for(int i=0 ; i<2;i++)
    {
        printf("%d %d\n",a1[i],b1[i]);
    }

    return 0;
}