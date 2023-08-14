//Program to find input of 2 numbers and their sum,difference,multiplication,division.
#include<stdio.h>
#include<conio.h>
void main()
{
    float a,b,add,sub,multi,div;
    clrscr();
    printf("\n Enter the value of a=");
    scanf("%f",&a);
    printf("\n Enter the value of b=");
    scanf("%f",&b);
    add=a+b;
    printf("\n Sum=%f",add);
    sub=a-b;
    printf("\n Diff=%f",sub);
    multi=a*b;
    printf("\n multiplication=%f",multi);
    div=a/b;
    printf("\n Division=%f",div);
    getch();4
}