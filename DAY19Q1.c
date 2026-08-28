//Q37: Write a program to find the LCM of two numbers.

/*
Sample Test Cases:
Input 1:
4 5
Output 1:
20

Input 2:
7 3
Output 2:
21

*/
#include <stdio.h>
int main() 
{
    int a; 
    int b;
    int max; 
    scanf("%d %d", &a, &b);

    
    if (a > b) 
    {
        max = a;
    }
     else 
     {
        max = b;
    }
    while (1)
     {
        if (max % a == 0 && max % b == 0)
         {
            
            printf("%d\n", max);
            break;
        }
        max = max + 1;
    }

    return 0;
}
