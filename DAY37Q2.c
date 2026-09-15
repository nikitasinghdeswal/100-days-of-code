/*Q73: Find the sum of each row of a matrix and store it in an array.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
6 15

*/
#include <stdio.h>

int main() 
{
    int r, c;
    scanf("%d %d", &r, &c);

    int a[r];

    for (int i = 0; i < r; i++) 
    {
        int s = 0;
        for (int j = 0; j < c; j++) 
        {
            int v;
            scanf("%d", &v);
            s += v;
        }
        a[i] = s;
    }

    for (int i = 0; i < r; i++)
     {
        printf("%d\n", a[i]);
    }

    return 0;
}
