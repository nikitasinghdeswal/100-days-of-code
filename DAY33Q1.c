/*Q65: Search in a sorted array using binary search.

/*
Sample Test Cases:
Input 1:
5
1 3 5 7 9
7
Output 1:
Found at index 3

Input 2:
5
1 3 5 7 9
6
Output 2:
-1

*/
#include <stdio.h>

int main()
 {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    
    int a[n];
    for (int i = 0; i < n; i++)
     {
        scanf("%d", &a[i]);
    }
    
    int t;
    scanf("%d", &t);
    
    int l = 0;
    int r = n - 1;
    int ans = -1;
    
    while (l <= r)
     {
        int m = l + (r - l) / 2;
        if (a[m] == t) 
        {
            ans = m;
            break;
        }
        if (a[m] < t)
         {
            l = m + 1;
        } 
        else 
        {
            r = m - 1;
        }
    }
    
    if (ans != -1)
     {
        printf("Found at index %d\n", ans);
    } else {
        printf("-1\n");
    }
    
    return 0;
}
