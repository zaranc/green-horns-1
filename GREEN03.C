#include<stdio.h>
#include<conio.h>
main()
{
 int a,b,c;
 clrscr();
 printf("enter of value a");
 scanf("%d",&a);
 printf("enter of value b");
 scanf("%d",&b);
  c=a;
  a=b;
  b=c;
 printf("after swapping value of is a=%d \n",a);
 printf("after swapping value of is b=%d \n",b);
 getch();



}