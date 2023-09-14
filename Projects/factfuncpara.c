//Program to find factorial of a number using function with parameter.
#include<stdio.h>
#include<conio.h>
void fact(int); //Function prototype
void main()
{
    int num;
    clrscr();
    printf("\n Enter the number::");
    scanf("%d",&num);
    fact(num); //Function Call.
    getch();
}
void fact(int n) //Function Definition.
{
    int i,f=1;
    for(i=1;i<=n;i++)
    f=f*i;
    printf("\n Factorial of%d=%d",n,f);
}