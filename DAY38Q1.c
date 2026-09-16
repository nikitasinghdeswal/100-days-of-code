/*Q75: Add two matrices.

/*
Sample Test Cases:
Input 1:
2 2
1 2
3 4
2 2
5 6
7 8
Output 1:
6 8
10 12

*/
#include <stdio.h>

int main() 
{
    int r1, c1, r2, c2;
    int m1[100][100];
    int m2[100][100];

    if (scanf("%d %d", &r1, &c1) != 2) return 0;
    for (int i = 0; i < r1; i++) 
    {
        for (int j = 0; j < c1; j++) 
        {
            scanf("%d", &m1[i][j]);
        }
    }

    if (scanf("%d %d", &r2, &c2) != 2) return 0;
    for (int i = 0; i < r2; i++)
     {
        for (int j = 0; j < c2; j++)
         {
            scanf("%d", &m2[i][j]);
        }
    }

    for (int i = 0; i < r1; i++) 
    {
        for (int j = 0; j < c1; j++)
         {
            printf("%d", m1[i][j] + m2[i][j]);
            if (j < c1 - 1)
             {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
