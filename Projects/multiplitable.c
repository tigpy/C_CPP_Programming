//Program to print number Table.
#include<stdio.h>
#include<conio.h>
void main()
{
    int num,i;
    clrscr();
    printf("\n Enter any integer number=");
    scanf("%d",&num);
    printf("\n Table of %d",num);
    for (i=1;i<=10;i++)
    printf("\n%d*%d=%d",num,i,num*i);
    getch();

}