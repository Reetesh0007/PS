#include<stdio.h>
void main()
{
    int BS,hra,da,pf,TS,allow;
    char grade;
    printf("enter the basic salary ");
    scanf("%d",&BS);
    printf("enter the character");
    scanf("%s",&grade);
    if(grade=='A')
    {
        allow=1700;
    }
    else if(grade=='B')
    {
        allow=1500;
    }
    else
        allow=1300;
    hra=BS*0.2;
    da=BS*0.5;
    pf=BS*0.11;
    TS=BS+hra+da+allow-pf;
    printf("total salary=%d",TS);



}