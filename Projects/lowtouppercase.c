//Program to read lowercase, character and displaying its uppercase character.
#include<stdio.h>
#include<ctype.h>
void main()
{
    int lower,upper;
    lower=getchar();
    upper=toupper(lower);
    putchar(upper);
    
}