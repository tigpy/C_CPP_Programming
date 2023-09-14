//program to swap two number using function.
#include<stdio.h>
#include<conio.h>
void swap(int,int);
void main()
{
    int a,b,temp;
    clrscr();
    printf("\n Enter a number::");
    scanf("%d",&a);
    printf("\n Enter a number::");
    scanf("%d",&b);
    printf("\n Values before swapping function");
    printf("\n a=%d \t b=%d",a,b);
    swap(a,b); //actual parameters.
    printf("\n Values after swapping function");
    printf("\n a=%d \t b=%d",a,b);
    getch();
}
void swap(int a,int b)//Formal function.
{
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("\n values after swapping function");
    printf("\n a=%d \t b=%d",a,b);
}