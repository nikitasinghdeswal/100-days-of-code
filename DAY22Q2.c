//Q44: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

/*
Sample Test Cases:
Input 1:
3
Output 1:
Approximate sum: 2.6

Input 2:
5
Output 2:
Approximate sum: 4.4

*/
#include <stdio.h>
int main() 
{
    int n;
    float sum = 0.0; 

    scanf("%d", &n);

    for (int i = 1; i <= n; i++) 
    {
        if (i == 1) 
        {
            sum += 1.0;
        }
         else 
        {
            int a = 2 * i - 1;
            int b = 2 * i;
            
            sum += (float)a / b; 
        }
    }
    printf("Approximate sum: %.1f\n", sum);
    return 0;
}
