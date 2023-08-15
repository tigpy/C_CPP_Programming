//Program to find factorial of a number using "do while loop"
#include<stdio.h>
#include<conio.h>
void main()
{
    int num,fact=1,i=1;
    clrscr();
    printf("\n Enter any integer number=");
    scanf("%d",&num);
    do
    {
        fact=fact*i;
        i=i+1;
    } while(i<=num);
    printf("\n Factorial of %d=%d",num,fact);
    getch();
}