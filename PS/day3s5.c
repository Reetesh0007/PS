#include<stdio.h>
#include<stdio.h>
long factorial(int p)
{
    long f=1;
    for(p;p>=1;p--)
    f=f*p;
    return f;
}
float series(floatx)
{
    int i,fact=1,sum=0,s=1;
    for(i=1;i<=n;i+=2)
    {
        sum=sum+(pow((double)x,i)/factorial(i))*s;
        
    }
    printf("enter the value of x and n");
    scanf("%d%d",&x,&n);
    for(i=1;i<=n;i+=2)
    {
        fact=fact*i;
        sum=sum+(x*sign*1)/fact;
        sign=-1*sign;
    }
    printf("%d",sum);

}