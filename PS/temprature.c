#include<stdio.h>
void main()
{
    int temp;
    printf("enter the value of temp");
    scanf("%d",&temp);
    if(temp<0)
    {
        printf("Freezing weather");
    }
    else if (temp>0 && temp<10)
    {
        printf("very cold weather");
    }
    else if(temp>10 && temp<20)
    {
        printf("cold weather");
    }
    else if(temp>20 && temp<30)
    {
        printf("Normal");
    }
    else if(temp>30 && temp<40)
    {
        printf("Hot weather");
    }
    else 
    printf("Very hot ");
}