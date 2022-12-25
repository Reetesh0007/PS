#include<stdio.h>
#include<string.h>
void main()
{
    int l=0,i;
    char s[70];
    printf("enter any string ");
    scanf("%s",&s[0]);
  for(i=0;s[i]!='\0';i++)
  {
    l++;
  }
    printf("lenght of the string %d",l);
}