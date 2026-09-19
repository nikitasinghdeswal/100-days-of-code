/*Q79: Perform diagonal traversal of a matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9

*/
#include <stdio.h>

int main() 
{
    int R, C;
    scanf("%d %d", &R, &C);
    
    int matrix[100][100];
    for (int i = 0; i < R; i++)
      {
        for (int j = 0; j < C; j++) 
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    int first = 1;
    for (int d = 0; d < R + C - 1; d++)
      {
        if (d % 2 == 0)
        {
            int r = (d < R) ? d : R - 1;
            int c = d - r;
            while (r >= 0 && c < C)
              {
                if (!first) printf(" ");
                printf("%d", matrix[r][c]);
                first = 0;
                r--;
                c++;
            }
        } 
        else 
        {
            int c = (d < C) ? d : C - 1;
            int r = d - c;
            while (r < R && c >= 0) 
            {
                if (!first) printf(" ");
                printf("%d", matrix[r][c]);
                first = 0;
                r++;
                c--;
            }
        }
    }
    printf("\n");
    
    return 0;
}
