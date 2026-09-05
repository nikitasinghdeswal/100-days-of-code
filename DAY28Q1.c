/*Q55: Write a program to print all the prime numbers from 1 to n.

/*
Sample Test Cases:
Input 1:
10
Output 1:
2 3 5 7

Input 2:
20
Output 2:
2 3 5 7 11 13 17 19

*/
#include <stdio.h>

int main() 
{
    int n;
    int i;
    int j;
    int f;
    
    if (scanf("%d", &n) != 1) 
    {
        return 0;
    }
    
    for (i = 2; i <= n; i++) 
    {
        f = 1;
        
        for (j = 2; j * j <= i; j++)
         {
            if (i % j == 0)
             {
                f = 0;
                break;
            }
        }
        
        if (f)
         {
            printf("%d ", i);
        }
    }
    
    printf("\n");
    return 0;
}
