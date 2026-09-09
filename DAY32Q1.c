/*Q63: Merge two arrays.

/*
Sample Test Cases:
Input 1:
3
1 2 3
2
4 5
Output 1:
1 2 3 4 5

*/
#include<stdio.h>

int main()
 {
    int a, b;
    if (scanf("%d", &a) != 1) 
    return 0;
    int c[a];
    for (int i = 0; i < a; i++)
     {
        scanf("%d", &c[i]);
    }
    if (scanf("%d", &b) != 1) 
    return 0;
    int d[b];
    for (int i = 0; i < b; i++)
     {
        scanf("%d", &d[i]);
    }
    for (int i = 0; i < a; i++) 
    {
        printf("%d ", c[i]);
    }
    for (int i = 0; i < b; i++)
     {
        printf("%d%s", d[i], (i == b - 1) ? "" : " ");
    }
    printf("\n");
    return 0;
}
