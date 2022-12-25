#include<stdio.h>
void main()
{
    char str,i,j,k,n;
    n=strlen(str);
    for ( i = 1; i <= n; i++)
    {
        for(j=1;j<i;j++)
        {
            printf(".");
        }
    }
    for(k=i-1;k<n;k++)
    {
        printf("%c",str);
    }
    
}