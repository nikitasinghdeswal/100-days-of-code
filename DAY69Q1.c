/*Q119: Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.

/*
Sample Test Cases:
Input 1:
nums1 = [1,3,3,4]
Output 1:
3

Input 2:
nums1 = [1,2,2]
Output 2:
2

Input 3:
nums1 = [0,4,1,1,5]
Output 3:
1

*/
#include <stdio.h>

int main() 
{
    int nums[1000], n = 0;
    int seen[10001] = {0};
    int num = 0, reading = 0;
    char ch;
    int started = 0;

    while (scanf("%c", &ch) == 1)
     {
        if (ch == '[')
         {
            started = 1;
            continue;
        }

        if (!started)
            continue;

        if (ch >= '0' && ch <= '9')
         {
            num = num * 10 + (ch - '0');
            reading = 1;
        }
         else
          {
            if (reading)
             {
                nums[n++] = num;
                num = 0;
                reading = 0;
            }

            if (ch == ']')
                break;
        }
    }

    for (int i = 0; i < n; i++)
     {
        if (seen[nums[i]]) 
        {
            printf("%d\n", nums[i]);
            return 0;
        }

        seen[nums[i]] = 1;
    }

    return 0;
}
