//Program to find Reverse of a number.
#include<stdio.h>
#include<conio.h>
void main()
{
    int num,reverse=0,n1;
    clrscr();
    printf("\n Enter any integer number=");
    scanf("%d",&num);
    do
    {
        n1=num%10;
        reverse=reverse*10+n1;
        num=num/10;
    } while (num>0);
    printf("\n Reverse=%d",reverse);
    getch();
    
}

