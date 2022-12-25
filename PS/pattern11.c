#include<stdio.h>
void main()
{
    int i,j,k;
    for(i=1;i<=10;i++)
    {
        k=1;
        for(j=1;j<=5;j++)
        {
            if(j<=6-i||j>=4+i)
            {
                printf("%d",k);
                j<5?k++:k--;
            }
            else{
            printf(" ");
             if(j==5)
             k--;
        }
        }
    
 printf("\n");
}
}