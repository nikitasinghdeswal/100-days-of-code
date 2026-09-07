/*Q58: Find the maximum and minimum element in an array.

/*
Sample Test Cases:
Input 1:
5
2 9 1 4 7
Output 1:
Max=9, Min=1

Input 2:
3
10 10 10
Output 2:
Max=10, Min=10

*/
#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1 || n <= 0) {
        return 0;
    }

    int current;
    if (scanf("%d", &current) != 1) {
        return 0;
    }

    int max = current;
    int min = current;

    for (int i = 1; i < n; i++) {
        if (scanf("%d", &current) == 1) {
            if (current > max) {
                max = current;
            }
            if (current < min) {
                min = current;
            }
        }
    }

    printf("Max=%d, Min=%d\n", max, min);
    return 0;
}
