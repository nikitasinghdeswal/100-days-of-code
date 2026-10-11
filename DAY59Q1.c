/*Q109: Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.

/*
Sample Test Cases:
Input 1:
arr[100, 200, 300, 400] = , k = 2
Output 1:
700

Input 2:
arr[1, 4, 2, 10, 23, 3, 1, 0, 20] = , k = 4
Output 2:
39

Input 3:
arr[100, 200, 300, 400] = , k = 1
Output 3:
400

*/
#include <stdio.h>

int main() 
{
    int nums[10000];
    int count = 0;
    int current_num = 0;
    int has_num = 0;
    int sign = 1;
    int ch;

    while ((ch = getchar()) != EOF) 
    {
        if (ch == '-') 
        {
            sign = -1;
            has_num = 1;
            current_num = 0;
        } else if (ch >= '0' && ch <= '9') 
        {
            if (!has_num) 
            {
                has_num = 1;
                current_num = 0;
            }
            current_num = current_num * 10 + (ch - '0');
        } else {
            if (has_num)
             {
                nums[count++] = sign * current_num;
                has_num = 0;
                sign = 1;
            }
            if (ch == '\n' && count >= 2)
             {
                break;
            }
        }
    }
    if (has_num)
     {
        nums[count++] = sign * current_num;
    }

    if (count < 2) 
    {
        printf("0\n");
        return 0;
    }

    int k = nums[count - 1];
    int n = count - 1;

    if (n < k || k <= 0)
     {
        printf("0\n");
        return 0;
    }

    int current_sum = 0;
    for (int i = 0; i < k; i++)
     {
        current_sum += nums[i];
    }

    int max_sum = current_sum;
    for (int i = k; i < n; i++)
     {
        current_sum += nums[i] - nums[i - k];
        if (current_sum > max_sum) 
        {
            max_sum = current_sum;
        }
    }

    printf("%d\n", max_sum);
    return 0;
}
