/*C program to find the          */
#include <stdio.h>
#include <conio.h>
#define Pi 3.141
void main()
{
int a,b,c,Sum,Avg;
float Radius,Area;
printf("Enter  the Radius of the Circle=");
scanf("%f",&Radius);
Area=Pi*Radius*Radius;
printf("Area of the circle is= %f",Area);
printf("\nEnter the value of a= ",a);
scanf("%d",&a);
printf("\nEnter the value of b= ",b);
scanf("%d",&b);
printf("\nEnter the value of c= ",c);
scanf("%d",&c);
Sum=a+b+c;
printf("\nThis is the Sum of Three Numbers: %d",Sum);
Avg=Sum/3;
printf("\nThis is the Average of Three Numbers: %d",Avg);
getch();
clrscr();
}