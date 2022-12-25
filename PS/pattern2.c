#include<stdio.h>
void main()
{
    int n, i,j,a=0;
    printf("enter the value of n");
    scanf("%d",&n);
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=i;j++)
           {
            printf("%d",a+j);
            printf(" ");
           }
        a++;
        printf("\n");
    }
}