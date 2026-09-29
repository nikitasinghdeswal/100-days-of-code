/*Q101: Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs. The elements in the sorted array might be repeated. You need to print the first and last occurrence of the target and print the index of first and last occurrence. Print -1, -1 if the target is not present.

/*
Sample Test Cases:
Input 1:
nums = [5,7,7,8,8,10], target = 8
Output 1:
3,4

Input 2:
 nums = [5,7,7,8,8,10], target = 6
Output 2:
-1,-1

Input 3:
 nums = [5,7,7,8,8,10], target = 10
Output 3:
5,5

*/
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

    int first = -1;
    int last = -1;

    for (int i = 0; i < n; i++) 
    {
        if (a[i] == t)
         {
            if (first == -1)
             {
                first = i;
            }
            last = i;
        }
    }

    printf("%d,%d\n", first, last);
    return 0;
}
