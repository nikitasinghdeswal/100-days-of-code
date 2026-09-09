/*Q64: Find the digit that occurs the most times in an integer number.

/*
Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7

*/
#include <stdio.h>
#include <string.h>

int main() {
    char a[100];
    if (scanf("%s", a) != 1)
     return 0;
    int b[10] = {0};
    int c = strlen(a);
    for (int i = 0; i < c; i++) 
    {
        b[a[i] - '0']++;
    }
    int d = 0;
    int e = -1;
    for (int i = 0; i < 10; i++)
     {
        if (b[i] > e)
         {
            e = b[i];
            d = i;
        }
    }
    printf("%d\n", d);
    return 0;
}
