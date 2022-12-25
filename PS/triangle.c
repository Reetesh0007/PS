#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter the value of a,b,c ");
    scanf("%d%d%d",&a,&b,&c);
    if(a==b && b==c)
    {
        printf("equilateral traingle");
    }
    else if(a==b || b!=c && a==c)
    {
        printf("isosceles triangle");
    }
    else 
    printf("scalene triangle");
}