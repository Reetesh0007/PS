#include<stdio.h>
#include<string.h>
int main()
{
    int i,word;
    char str[100];
    printf("enter the string");
    // scanf("%s",&str);
    gets(str);
    i=0;
    word=1;
    while(str[i]!='\0'){
        if(str[i]==' ' || str[i]== '\n' || str[i]=='\t')
        {
            word++;

        }
        i++;
    }
    printf("count the total number of words in a string is %d",word-1);
    return 0 ;
}
