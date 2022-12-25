#include<stdio.h>
#include<string.h>
void main()
{
    int i,l;
    char ch,s[8];
    printf("enter any string ");
    scanf("%s",&s);
    for(l=0;s[l];l++);
        for(i=0;i<l/2;i++)
        {
            ch=s[i];
            s[i]=s[l-i-1];
            s[l-i-1]=ch;
        }

            printf("reverse of the string is %s",s);
}
