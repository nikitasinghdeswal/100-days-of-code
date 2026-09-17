/*Q77: Check if the elements on the diagonal of a matrix are distinct.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 1
Output 1:
False

Input 2:
3 3
1 2 3
4 5 6
7 8 9
Output 2:
True

*/
#include <stdio.h>

int main() 
{
    int r, c, v;
    scanf("%d %d", &r, &c);
    
    int n = (r < c) ? r : c;
    int a[n];
    
    for (int i = 0; i < r; i++) 
    {
        for (int j = 0; j < c; j++)
         {
            scanf("%d", &v);
            if (i == j) 
            {
                a[i] = v;
            }
        }
    }
    
    for (int i = 0; i < n; i++)
     {
        for (int j = i + 1; j < n; j++) 
        {
            if (a[i] == a[j]) 
            {
                printf("False\n");
                return 0;
            }
        }
    }
    
    printf("True\n");
    return 0;
}
