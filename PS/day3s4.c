#include<stdio.h>
#include<math.h>
void main()
{
    int x,n,i,fact=1,sum=0,j,sign=1;
    printf("enter the value of x and n");
    scanf("%d%d",&x,&n);
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
        sum=sum+(x*sign*1/fact);
        sign=sign*-1;

    }
    printf("%d",sum);

}