/*Q105: Write a program to take an integer array nums of size n, and print the majority element. The majority element is the element that appears strictly more than ⌊n / 2⌋ times. Print -1 if no such element exists. Note: Majority Element is not necessarily the element that is present most number of times.

/*
Sample Test Cases:
Input 1:
nums = [3,2,3]
Output 1:
3

Input 2:
nums = [2,2,1,1,1,2,2]
Output 2:
2

Input 3:
nums = [2,2,1,1,1,2,2,3]
Output 3:
-1

*/
#include <stdio.h>

int main()
 {
    int data[1000]; 
    int total_numbers = 0;
    int val, ch;

    
    while ((ch = fgetc(stdin)) != EOF && ch != '\n')
     {
        if ((ch >= '0' && ch <= '9') || ch == '-')
         {
            ungetc(ch, stdin);
            if (scanf("%d", &val) == 1)
             {
                data[total_numbers++] = val;
            }
        }
    }

    if (total_numbers == 0) return 0;

    
    int start_idx = 0;
    int n = total_numbers;
    if (data[0] == total_numbers - 1)
     {
        start_idx = 1;
        n = data[0];
    }

    
    int candidate = 0, count = 0;
    for (int i = start_idx; i < total_numbers; i++) 
    {
        if (count == 0)
         {
            candidate = data[i];
            count = 1;
        } 
        else if (data[i] == candidate)
         {
            count++;
        } 
        else 
        {
            count--;
        }
    }
    
    int actual_count = 0;
    for (int i = start_idx; i < total_numbers; i++) 
    {
        if (data[i] == candidate)
         {
            actual_count++;
        }
    }

    if (actual_count > n / 2) 
    {
        printf("%d\n", candidate);
    } 
    else 
    {
        printf("-1\n");
    }

    return 0;
}
