#include<stdio.h>
#include<conio.h>
void main()
{
    int num,i,flag=1;
    clrscr();
    printf("\n Enter the number: ");
    scanf("%d",&num);
    for(i=2;i<=num/2;i++);
    {
        if(num%i==0)
        {
            flag=0;
            break;
        }
    }
    if(flag==1)
    printf("\n %dis a Prime number",num);
    else
    printf("\n %dis not a Prime number",num);
    getch();
}