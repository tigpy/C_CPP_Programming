//program to find factorial of a number
#include<stdio.h>
#include<conio.h>
void main()
{
    int num,fact=1,i;
    clrscr();
    i=1;
    printf("\n Enter any integer number=");
    scanf("%d",&num);
    while (i<=num)
    {
          fact=fact*i;
          i++;
    }
    printf("\n Factorial of%d=%d",num,fact);
    getch();
    
}