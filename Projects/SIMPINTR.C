//Program to calculate simple interest.
#include<stdio.h>
#include<conio.h>
void main()
{
 float Principal,rate,time,S_i;
 clrscr();
 printf("\n Enter the Principal=");
 scanf("%f",&Principal);
 printf("\n Enter the rate=");
 scanf("%f",&rate);
 printf("\n Enter the time=");
 scanf("%f",&time);
 S_i=Principal*rate*time/100;
 printf("\n The Simple intrest is=%f",S_i);
 getch();
 }