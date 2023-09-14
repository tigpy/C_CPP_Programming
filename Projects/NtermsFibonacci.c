#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n;
    int f1=0,f2=1;
    int nextterm=f1+f2;
    clrscr();
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    printf("Fibonacci series: %d,%d",f1,f2);
    for(i=3;i<=n;i++)
    {
        printf(",%d",nextterm);
        f1=f2;
        f2=nextterm;
        nextterm=f1+f2;
    }
    getch();
}