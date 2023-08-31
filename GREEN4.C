#include<stdio.h>
#include<conio.h>
main()
{
 int bs,hra,da,ta,gs;
 clrscr();
 printf("enter your base salary:\n");
 scanf("%d",&bs);
  printf("enter your hra:\n");
 scanf("%d",&hra);
  printf("enter your da:\n");
 scanf("%d",&da);
  printf("enter your ta:\n");
 scanf("%d",&ta);

 hra=hra*bs/100;
 da =da*bs/100;
 ta =ta*bs/100;

 gs=bs+hra+da+ta;
 printf("your  gross salary:%.2d",gs);
 getch();



}