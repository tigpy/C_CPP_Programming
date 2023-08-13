//program to find the area of triangle whose 3 sides are given.
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
float a,b,c,S,area;
clrscr();
printf("\n Enter the value of a=");
scanf("%f",&a);
printf("\n Enter the value of b=");
scanf("%f",&b);
printf("\n Enter the value of c=");
scanf("%f",&c);
S=a+b+c/2;
printf("\n Semiperimeteris=%f",S);
area=sqrt(S*(S-a)*(S-b)*(S-c));
printf("\n The area of triangle is=%f",area);
getch();
}