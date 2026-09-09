/*Q61: Search for an element in an array using linear search.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
3
Output 1:
Found at index 2

Input 2:
4
10 20 30 40
25
Output 2:
-1

*/
  #include <stdio.h>

int main()
 {
    int n, i, t, f = -1;
    
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++)
     {
        scanf("%d", &a[i]);
    }
    scanf("%d", &t);
    
    for (i = 0; i < n; i++) 
    {
        if (a[i] == t) 
        {
            f = i;
            break;
        }
    }
    
    if (f == -1) 
    {
        printf("-1\n");
    } 
    else 
    {
        printf("Found at index %d\n", f);
    }
    
    return 0;
}
