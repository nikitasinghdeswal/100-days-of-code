//Q28: Write a program to print the product of even numbers from 1 to n.

/*
Sample Test Cases:
Input 1:
4
Output 1:
8 (2 * 4)

Input 2:
6
Output 2:
48 (2 * 4 * 6)

*/
#include <stdio.h>

int main() {
    int n;
    long long product = 1;

    if (scanf("%d", &n) != 1 || n < 2) {
        printf("0\n");
        return 0;
    }
    for (int i = 2; i <= n; i += 2) {
        product *= i;
    }
    printf("%lld (", product);
    for (int i = 2; i <= n; i += 2) {
        if (i == 2) {
            printf("%d", i);
        } else {
            printf(" * %d", i);
        }
    }

    printf(")\n");
    return 0;
}
