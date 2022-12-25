#include<stdio.h>
void main()
{
    int x,y;
    printf("enter the value of x and y");
    scanf("%d%d",&x,&y);
    if(x>0 && y>0)
    {
        printf("Q1");
    }
    else if(x>0 && y<0)
    {
        printf("Q2");
    }
    else if(x<0 && y<0)
    {
        printf("Q3");
    }
    else 
    printf("Q4");
}