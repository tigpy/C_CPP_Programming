/*Program to find big number out of two given numbers.*/
#include <stdio.h>
#include <conio.h>
void main()
{
    int a,b,Big;
    clrscr();
    printf("\n Enter a=");
    scanf("%d",&a);
    printf("\n Enter b=");
    scanf("%d",&b);
    if(a>b)
    Big=a;
    else 
    Big=b;
    printf("\n Big no=%d",Big);
    getch();
    

}