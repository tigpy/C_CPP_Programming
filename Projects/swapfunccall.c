//Program to swap two numbers using call by reference method.
#include<stdio.h>
#include<conio.h>
void swap(int* , int*);
void main()
{
    int x,y;
    clrscr();
    printf("\n Enter a number:::");
    scanf("%d",&x);
    printf("\n Enter a number:::");
    scanf("%d",&y);
    printf("\n Values Before swapping main::");
    printf("\n x=%d \t y=%d",x,y);
    swap(&x,&y); //Actual parameter.
    printf("\n Values after swapping main::");
    printf("\n x=%d \t y=%d",x,y);
    getch();
}
void swap(int*x1,int*y1)
{
    int temp;
    temp=*x1;
    *x1=*y1;
    *y1=temp;
    printf("\n values swap function ");
    printf("\n *x1=%d \t *y1=%d",*x1,*y1);
}






