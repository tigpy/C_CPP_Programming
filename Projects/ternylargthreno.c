#include<stdio.h>
int terny(int x,int y,int z );
int main()
{
    int x,y,z;
    printf("/n Enter the value of x:::");
    scanf("%d",&x);
    printf("/n Enter the value of y:::");
    scanf("%d",&y);
    printf("/n Enter the value of z:::");
    scanf("%d",&z);
    int s = terny(x,y,z);
    printf("\n The largest number is::%d",s);
    return 0;
} 
int terny(int x, int y, int z)
{
    return (x>y)?((x>z)?x:z):((y>z)?y:z);
}



