//Program to find Sum of Digits of a number.
#include<stdio.h>
#include<conio.h>
void main()
{
    int num,sum=0,n1;
    clrscr();
    printf("\n Enter any integer number=");
    scanf("%d",&num);
    do
    {
        n1=num%10;
        sum=sum+n1;
        num=num/10;
    } while (num>0);
    printf("\n Sum of Digits=%d",sum);
    getch();
}