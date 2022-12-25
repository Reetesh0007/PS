#include<stdio.h>
void main()
{
    int i,j;
    char ch;
    printf("enter the character");
    scanf("%c",&ch);
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%C",ch);
        }
            ch++;
        
        printf("\n");
    }
}