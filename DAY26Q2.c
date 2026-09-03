/*Q52: Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*



/*
Sample Test Cases:
Input 1:

Output 1:
Pattern with stars spaced irregularly as shown.

*/
#include <stdio.h>

int main() 
{
    int stars = 1;
    
    for (int i = 1; i <= 5; i++) 
    {
        for (int j = 1; j <= stars; j++)
         {
            printf("*\n");
        }
        printf("\n");
        
        if (i < 3) 
        {
            stars += 2;
        }
         else
          {
            stars -= 2;
        }
    }
    
    return 0;
}
