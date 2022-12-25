#include<stdio.h>
#include<math.h>
void main()
{
    int i,n,sum=0,fact=1;
    printf("enter the value of n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
        sum=sum+((fact)/i);
    }
        printf("%d",sum);
 }
