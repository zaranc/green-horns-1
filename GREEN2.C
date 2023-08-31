#include<stdio.h>
#include<conio.h>
main()
{
 int a,b;
 clrscr();
 printf("enter of value a");
 scanf("%d",&a);
 printf("enter of value b");
 scanf("%d",&b);
 a=a+b;
 b=a-b;
 a=a-b;
 printf("after swapping value of is a=%d \n",a);
 printf("after swapping value of is b=%d \n",b);
 getch();



}