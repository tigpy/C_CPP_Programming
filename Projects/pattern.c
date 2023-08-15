//Program to print pattern 
/*1
  2 3 
  4 5 6
  7 8 9 10
  11 12 13 14 15
*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,a=0;
    clrscr();
    for (i=1;i<=5;i++)
    {
        for (j=1;j<=i;j++)
        {
            printf("%d \t",a,a++);
            
        }
        printf("\n");
    }
    getch();
}