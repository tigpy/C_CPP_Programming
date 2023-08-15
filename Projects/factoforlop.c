//program to find factorial of a number using"for loop"
#include<stdio.h>
#include<conio.h>
void main()
{
    int num,fact=1,i;
    printf("\n Enter any integer number=");
    scanf("%d",&num);
    for (i=1;i<=num;i++)
    {
        fact=fact*i;
    }
    printf("\nfactorial of %d=%d",num,fact);
    getch();
}