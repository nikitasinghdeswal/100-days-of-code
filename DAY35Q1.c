/*Q69: Find the second largest element in an array.

/*
Sample Test Cases:
Input 1:
5
10 20 30 40 50
Output 1:
40

*/
#include <stdio.h>

int f(int *a, int b)
 {
    int c = a[0];
    int d = -1;
    for (int e = 1; e < b; e++) 
    {
        if (a[e] > c) 
        {
            d = c;
            c = a[e];
        } else if (a[e] > d && a[e] != c)
         {
            d = a[e];
        }
    }
    return d;
}

int main() 
{
    int x;
    scanf("%d", &x);
    int y[x];
    for (int z = 0; z < x; z++) 
    {
        scanf("%d", &y[z]);
    }
    printf("%d\n", f(y, x));
    return 0;
}
