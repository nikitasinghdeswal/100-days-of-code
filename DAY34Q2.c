/*Q68: Delete an element from an array.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
1 2 4 5

*/
#include <stdio.h>

int main()
 {
    int n, a[100], p, i;
    
    scanf("%d", &n);
    for (i = 0; i < n; i++)
     {
        scanf("%d", &a[i]);
    }
    
    scanf("%d", &p);
    
    for (i = p; i < n - 1; i++) 
    {
        a[i] = a[i + 1];
    }
    n--;
    
    for (i = 0; i < n; i++)
     {
        printf("%d", a[i]);
        if (i < n - 1) {
            printf(" ");
        }
    }
    printf("\n");
    
    return 0;
}
