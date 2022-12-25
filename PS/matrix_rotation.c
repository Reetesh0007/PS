#include<stdio.h>
void main()
{
    int a[10][10],m,n,i,j,temp;
    printf("enter the size of array ");
    scanf("%d%d",&m,&n);
    printf("enter the array elements ");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("matrix is : ");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
    printf("transpose of a matrix: ");
     for(i=0;i<m;i++)
       {
         for(j=i;j<n;j++)
         {
        temp=a[i][j];
        a[i][j]=a[j][i];
        a[j][i]=temp;
         }
       }
      for(i=0;i<m;i++)
       {
         for(j=0;j<n;j++)
        {
          printf("%d",a[i][j]);
        }
          printf("\n"); 
    }
    printf("\n");
}