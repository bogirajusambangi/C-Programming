#include<stdio.h>
#include<math.h>
int main()
{
   int x,y,x2,y2;
   float dis;
printf("Enter the (x,y) cordinates: ");
scanf("%d %d",&x,&y);
if(x>0 && y>0)
{
    printf("1st Quadrant\n");
}else if(x<0 && y>0)
{
     printf("2nd Quadrant\n");
}else if(x<0 && y<0)
{
     printf("3rd Quadrant\n");
}else if(x>0 && y<0)
{
     printf("4th Quadrant\n");
}else if(x==0 && y==0)
{
     printf("Origin\n");
}
printf("Enter the 2nd co-ordinate points (x2,y2): ");
scanf("%d %d",&x2,&y2);
dis=sqrt(pow((x2-x),2)+pow((y2-y),2));
printf("Distance =%.2f",dis);

    return 0;

}