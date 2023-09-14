#include<stdio.h>
#include<conio.h>
#include<math.h>

void main () {
     int f1=0,f2=1,f3,n,i;
     printf("\n enter how many times:");
     scanf("%d",&n);
     printf("%d %d",f1,f2);
     for(i=3;i<=n;i++)
     {
          f3=f1+f2;
          f1=f2;
          f2=f3;
          printf("%d\t",f3);
     }
     getch();

}