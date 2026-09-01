// Q45: Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.

/*
Sample Test Cases:
Input 1:
3
Output 1:
Approximate sum: 1.78

Input 2:
5
Output 2:
Approximate sum: 2.84

*/
#include <stdio.h>
int main()
 {
    int n;
    double sum = 0.0;
    if (scanf("%d", &n) != 1 || n <= 0)
     {
        return 0;
    }
    int denominator = 3;
    for (int i = 1; i <= n; i++)
     {
        int numerator = 2 * i;
        sum += (double)numerator / denominator;
        denominator += 4;
    }
    printf("Approximate sum: %.2f\n", sum);
    return 0;
}
