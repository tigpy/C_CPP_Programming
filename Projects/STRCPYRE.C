//Strcpy()Function & Strrev()Function
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
 char s1[50],s2[50];
 char s3[50];
 strcpy(s1,"Hello Aryan");
 strcpy(s2,s1);
 printf("%s\n",s2);
 printf("\nEnter your string:");
 gets(s3);
 printf("\nYour Reverse String is:%s",strrev(s3));
 getch();
 clrscr();
 }
