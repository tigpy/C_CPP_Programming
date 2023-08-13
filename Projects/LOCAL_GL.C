//Program to use of local and global variables
#include<stdio.h>
#include<conio.h>
int num1;
int main()
{
float num1; /*different from global 'a'*/
float num2;
num1=0.0; /*sets 'a'a declared in this block to 0.0*/
	  /*global 'a' is untouched*/
printf("\n Outer block a=%f",num1);
{
int num1;   /*new 'a' variable*/
	/*outer 'a' is still set to 0.0*/
printf("\n Inner block num1=%d",num1);
}
num2=num1; /*sets 'num2' to 0.0*/
printf("\n Outer block num2=%f",num2);
getch();
clrscr();
return 0;
}
