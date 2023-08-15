//Program to check the number is palindrom or not.
#include<stdio.h>
#include<conio.h>
void main()
{
    int num,reverse=0,n1,n2;
    clrscr();
    printf("\nEnter any integer number=");
    scanf("%d",num);
    n2=num;
    do 
    {
        n1=num%10;
        reverse=reverse*10+n1;
        num=num/10;

    } while(num>0);
    if(reverse==n2)
    printf("\n Nmuber is a palindrom number");
    else
    printf("\n Number is not a palindrom number");
    getch();
}