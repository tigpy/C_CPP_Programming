/* program to swap to number without using third */
#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
a=a+b;
b=a-b;
a=a-b;
printf("\n value of a before swap:",a);
scanf("%d",&a);
printf("\n value of b before swap:",b);
scanf("%d",&b);
printf("\n a=%d \t b=%d",a,b);
a=a+b;
b=a-b;
a=a-b;
printf("\n value of a&b after swap:");
printf("\n a=%d \t b=%d",a,b);
getch();
clrscr();
}
