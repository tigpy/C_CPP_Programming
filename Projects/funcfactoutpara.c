//Program to find factorial of a number without pasing parameter.
#include<stdio.h>
#include<conio.h>
void fact(void);//Function prototype.
void main()
{
    fact();//function call
    getch();
}
void fact()//function definition.
{
    int n,i,f=1;
    clrscr();
    printf("\n Enter any number::");
    scanf("%d",&n);
    for(i=1;i<=n;i++)

    printf("\n factorial of %d=%d",n,f);
    getch();
}