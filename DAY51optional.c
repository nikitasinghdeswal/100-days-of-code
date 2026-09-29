//Follow-up(optional): Can you do it in O(log n) Time Complexity?
#include <stdio.h>

int main() 
{
    int a[1000];
    int n = 0;
    int t;
    char c;

    while ((c = getchar()) != '[')
     {
        if (c == EOF) return 0;
    }

    while (1)
     {
        if (scanf("%d", &a[n]) != 1) break;
        n++;
        c = getchar();
        if (c == ']') break;
    }

    while ((c = getchar()) != '=')
     {
        if (c == EOF) return 0;
    }
    
    if (scanf("%d", &t) != 1) return 0;

    int low = 0;
    int high = n - 1;
    int first = -1;
    
    while (low <= high)
     {
        int mid = low + (high - low) / 2;
        if (a[mid] == t)
         {
            first = mid;
            high = mid - 1;
        } 
        else if (a[mid] < t) 
        {
            low = mid + 1;
        } 
        else 
        {
            high = mid - 1;
        }
    }

    low = 0;
    high = n - 1;
    int last = -1;
    
    while (low <= high) 
    {
        int mid = low + (high - low) / 2;
        if (a[mid] == t)
         {
            last = mid;
            low = mid + 1;
        } 
        else if (a[mid] < t)
         {
            low = mid + 1;
        } 
        else 
        {
            high = mid - 1;
        }
    }

    printf("%d,%d\n", first, last);
    return 0;
}
