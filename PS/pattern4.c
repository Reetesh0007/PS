#include<stdio.h>
void main()
{
    int  i,j,a=0;
    char ch;
    printf("enter the character");
    scanf("%c",&ch);
    for(i=65;i<=68;i++)
    {
        for(j=65;j<=i;j++)
           {
            printf("%c",j+a);
           }
        a++;
        printf("\n");
    }
}