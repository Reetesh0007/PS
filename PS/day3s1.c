#include<stdio.h>
void main()
{
    int i,fact=1,n,sum=0;
    printf("enter the value of n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    { 
        fact=fact*i;
        sum=sum+fact;
    }
    printf("%d",sum);
       

}