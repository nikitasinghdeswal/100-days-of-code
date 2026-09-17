/*Q78: Find the sum of main diagonal elements for a square matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
15

*/
#include <stdio.h>

int main() 
{
    int r, c, v, s = 0;
    scanf("%d %d", &r, &c);
    
    for (int i = 0; i < r; i++)
     {
        for (int j = 0; j < c; j++)
         {
            scanf("%d", &v);
            if (i == j) 
            {
                s += v;
            }
        }
    }
    
    printf("%d\n", s);
    return 0;
}
