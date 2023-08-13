/*C program to find area of the circle and avg of three no.*/
#include <stdio.h>
#include <conio.h>
#define pi 3.141
void main()
{
    int a,b,c,sum,avg;
    float radius, area;
    printf("Enter the radius of the circle\n");
    scanf("%f",&radius);
    area=pi*radius*radius;
    printf("area of the circle is =%f",area);
    printf("\n Enter the value of a and b and c");
    scanf("%d %d %d",&a,&b,&c);
    sum=a+b+c;
    printf("\n the sum of three numbers= %d",sum);
    avg=sum/3;
    printf("\n The avg of three no.=%d",avg);
    getch();

}