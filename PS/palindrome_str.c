#include<stdio.h>
#include<string.h>
void main()
{
   
    int l=0;
     char str[10];
    printf("enter the string");
    scanf("%s",&str);
      int h=strlen(str)-1;
      while(h>l){
        if(str[l++]!=str[h--])
        {
            printf("%s is  not palindrome",str);
        }
      }
      printf("%s is palindrome",str);
}