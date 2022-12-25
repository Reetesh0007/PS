#include<stdio.h>
void main()
{
    int i,j,k;
    for(i=1;i<=6;i++)
    {
        k=1;
        for(j=1;j<=11;j++)
        {
            if(j<=7-i||j>=5+i)
            {
                printf("%d",k);
                j<6?k++:k--;
            }
            else{
            printf(" ");
             if(j==6)
             k--;
        }
        }
    
 printf("\n");
}
}