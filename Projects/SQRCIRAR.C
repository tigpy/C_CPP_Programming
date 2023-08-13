/*Program to find area of rectangle,square and circle.*/
#include<stdio.h>
#include<conio.h>
#define Pi 3.141
void main()
{
float r,c,a,b,r1,r2,r3;
printf("\n Enter radius for circle=");
scanf("%f",&r);
r1=Pi*r*r;
printf("\n Enter one side for square=");
scanf("%f",&c);
r2=c*c;
printf("\n Enter base for rectangle=");
scanf("%f",&a);
printf("\n Enter hight for rectangle=");
scanf("%f",&b);
r3=a*b;
printf("\n Area of the circle=%f",r1);
printf("\n Area of the square=%f",r2);
printf("\n Area of the rectangle=%f",r3);
printf("\n");
getch();
clrscr();
}