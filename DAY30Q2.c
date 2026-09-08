/*Q60: Count positive, negative, and zero elements in an array.

/*
Sample Test Cases:
Input 1:
5
-1 0 1 2 -2
Output 1:
Positive=2, Negative=2, Zero=1

*/
#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;

    int p = 0;
    int m = 0;
    int z = 0;

    for (int i = 0; i < n; i++) {
        int x;
        if (scanf("%d", &x) == 1) {
            if (x > 0) {
                p++;
            } else if (x < 0) {
                m++;
            } else {
                z++;
            }
        }
    }

    printf("positive=%d, Negative=%d, Zero=%d\n", p, m, z);

    return 0;
}
