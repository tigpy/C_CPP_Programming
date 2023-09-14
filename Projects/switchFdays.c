//Program to find the days when numbers is entered.
#include<stdio.h>
#include<conio.h>
void main()
{
    int daysno;
    clrscr();
    printf("\n Enter the number of days(1-7)");
    scanf("%d",&daysno);
    switch (daysno)
    {
    case 1: printf("Monday");
              break;
    case 2: printf("Tuesday");
              break;
    case 3: printf("Wednesday");
            break;
    case 4: printf("Thursday");
            break;    
    case 5: printf("Friday");
            break;
    case 6: printf("Saturday");
            break;
    case 7: printf("Sunday");
    
        break;
    
    default:printf("Invalid");
        break;
    }
    getch();

}