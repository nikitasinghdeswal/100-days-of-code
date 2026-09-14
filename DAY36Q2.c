/*Q72: Find the sum of all elements in a matrix.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
21

*/
#include <stdio.h>

int main() 
{
    int rows, cols;
    if (scanf("%d %d", &rows, &cols) != 2) 
    {
        return 0;
    }
    
    int sum = 0;
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            int element;
            scanf("%d", &element);
            sum += element;
        }
    }
    
    printf("%d\n", sum);
    return 0;
}
