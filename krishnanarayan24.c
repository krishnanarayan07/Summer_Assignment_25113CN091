#include<stdio.h>
#include<conio.h>
void main()
{
 int x,y,i,r=1,t;
 printf("Enter a number:");
 scanf("%d",&x);
 printf("Enter the power:");
 scanf("%d",&y);
 for(i=1;i<=y;i++)
 {
  t=x;
  r=r*t;
 }
 printf("Result:%d",r);
 getch();
}
