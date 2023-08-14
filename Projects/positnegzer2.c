//program to check whether the number entered by user is positive,negative or zero using "if else statement".
#include<stdio.h>
#include<conio.h>
void main()
{
    int num;
    clrscr();
    printf("\n Enter number=");
    scanf("%d",&num);
    if(num>0)
    {
        printf("%d is positive number",num);
    }
    else if(num<0)
    {
        printf("%d is negative number",num);
    }
    else 
    num=0;
    printf("%d is zero number",num);  
    getch();
}