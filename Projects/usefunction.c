#include<stdio.h>
#include<conio.h>
void name(void);//Function prototype.
void main()
{
 int i;
 clrscr();
 for(i=0;i<10;i++)
 {
 name(); //Function call.
 }
 getch();
}
 void name() //Function Definition.
 {
 printf("\Mr.ROBOT.::  ");
}
