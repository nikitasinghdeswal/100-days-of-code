/*Q108: Write a Program to take an integer array nums. Print an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i]. The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

/*
Sample Test Cases:
Input 1:
nums = [1,2,3,4]
Output 1:
[24,12,8,6]

Input 2:
nums = [-1,1,0,-3,3]
Output 2:
[0,0,9,0,0]

*/
#include <stdio.h>

int main() 
{
    int nums[1000];
    int n = 0;
    char ch;

    while (scanf("%c", &ch) == 1 && ch != '[');

    while (scanf("%d", &nums[n]) == 1) 
    {
        n++;
        do {
            if (scanf("%c", &ch) != 1) break;
        } while (ch == ' ' || ch == '\t' || ch == '\n' || ch == '\r');
        
        if (ch == ']') 
        {
            break;
        }
    }

    int answer[1000];
    int prefix = 1;
    for (int i = 0; i < n; i++)
     {
        answer[i] = prefix;
        prefix *= nums[i];
    }

    int suffix = 1;
    for (int i = n - 1; i >= 0; i--) 
    {
        answer[i] *= suffix;
        suffix *= nums[i];
    }

    printf("[");
    for (int i = 0; i < n; i++) 
    {
        printf("%d", answer[i]);
        if (i < n - 1)
         {
            printf(",");
        }
    }
    printf("]\n");

    return 0;
}
