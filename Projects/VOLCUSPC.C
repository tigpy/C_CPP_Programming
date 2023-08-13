/*Program to find the volume of cube,sphere and cylinder*/
#include<stdio.h>
#include<conio.h>
void main()
{
float r,c,a,b,r1,r2,r3;
printf("\n Enter the side of cube=");
scanf("%f",&c);
r1=c*c*c;
printf("\n Volume of Cube=%f",r1);
printf("\n Enter the radius of sphere=");
scanf("%f",&r);
r2=4/3*3.14*r*r*r;
printf("\n Volume of sphere=%f",r2);
printf("\n Enter the value of radius for cylinder=");
scanf("%f",&a);
printf("\n Enter the value of height for cylinder=");
scanf("%f",&b);
r3=3.14*a*a*b;
printf("\n Volume of cylibder=%f",r3);
getch();
clrscr();
}