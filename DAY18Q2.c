//Q36: Write a program to find the HCF (GCD) of two numbers.

/*
Sample Test Cases:
Input 1:
12 18
Output 1:
6

Input 2:
7 9
Output 2:
1

*/
#include <stdio.h>

int main() {
    int a, b, gcd = 1;

    scanf("%d %d", &a, &b); 
    int limit = (a < b) ? a : b;
    for (int i = 1; i <= limit; i++) {
        
        if (a % i == 0 && b % i == 0) {
            gcd = i; 
        }
    }

    printf("%d\n", gcd);
    return 0;
}
