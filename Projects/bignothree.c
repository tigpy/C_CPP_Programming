//Program to find big number out of three given numbers.
#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c,Big;
    clrscr();
    printf("\n Enter the value of  a=");
    scanf("%d",&a);
    printf("\n Enter the value of  b=");
    scanf("%d",&b);
    printf("\n Enter the value of  c=");
    scanf("%d",&c);
    if ((a>b) && (a>c))
    Big=a;
    else if (b>c)
    Big=b;
    else
    Big=c;
    printf("\n Big number=%d",Big);
    getch();
    

}