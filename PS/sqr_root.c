#include<stdio.h> 
#include<math.h> 

void main() 
{
    float a, b, c, D, root1, root2;    

    printf("Enter coefficient of x^2: ");
    scanf("%f", &a);

    printf("Enter coefficient of x: ");
    scanf("%f", &b);

    printf("Enter constant term: ");
    scanf("%f", &c);

    D = sqrt( b*b - 4*a*c );        

    if(D >= 0)
    {
        root1 = ( -b + D ) / (2*a); 
        root2 = ( -b - D) / (2*a); //Sridharacharya method.
        printf("\nFirst root: %.2f\n", root1);
        printf("Second root: %.2f\n", root2);
    }

    else
    {
        printf("\nRoots are imaginary");
    }
}