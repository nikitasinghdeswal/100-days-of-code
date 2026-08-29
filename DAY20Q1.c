//Q39: Write a program to find the product of odd digits of a number.

/*
Sample Test Cases:
Input 1:
12345
Output 1:
15 (1*3*5)

Input 2:
2468
Output 2:
1 (no odd digits, assume 1)

*/
#include <stdio.h>
int main() 
{
    int num;
    if (scanf("%d", &num) != 1) 
    {
        return 1;
    }
    if (num < 0) 
    {
        num = -num;
    }
    int temp = num;
    int product = 1;
    int odd_count = 0;

    while (temp > 0) 
    {
        int digit = temp % 10;
        if (digit % 2 != 0) 
        {
            product *= digit;
            odd_count++;
        }
        temp /= 10;
    }
    if (odd_count == 0) 
    {
        printf("1 (no odd digits, assume 1)\n");
    } 
    else 
    {
        printf("%d (", product);
        
        int divisor = 1;
        int temp2 = num;
        while (temp2 >= 10) 
        {
            divisor *= 10;
            temp2 /= 10;
        }
        int is_first = 1;
        while (divisor > 0)
         {
            int digit = (num / divisor) % 10;
            if (digit % 2 != 0)
             {
                if (is_first)
                 {
                    printf("%d", digit);
                    is_first = 0; 
                }
                 else 
                 {
                    printf("*%d", digit);
                }
            }
            divisor /= 10;
        }
        printf(")\n");
    }

    return 0;
}
