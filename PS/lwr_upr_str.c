#include<stdio.h>
#include<string.h>
void main()
{
    int ascii;
    char upr,lwr;
    printf("enter the uppercase character: ");
    scanf("%c",&upr);
    ascii=upr+32;
    printf("%c character in lower case is : %c",upr,ascii);
    printf("enter the lower case character :");
    scanf("%c",&lwr);
    ascii=lwr-32;
    printf("%c character in the upper case is :%c",lwr,ascii);

}