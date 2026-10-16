/*Q114: Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.

/*
Sample Test Cases:
Input 1:
s = "abcabcbb"
Output 1:
3

Input 2:
s = "bbbbb"
Output 2:
1

Input 3:
s = "pwwkew"
Output 3:
3

*/

#include <stdio.h>
#include <string.h>

int main() 
{
    char s[1000];
    char temp[1000];
    int i, j, k, len, maxLen = 0;

    scanf(" s = \"%[^\"]\"", s);

    len = strlen(s);

    for (i = 0; i < len; i++) 
    {
        int seen[256] = {0};
        int count = 0;

        for (j = i; j < len; j++) 
        {
            unsigned char c = s[j];

            if (seen[c])
             {
                break;
            }

            seen[c] = 1;
            count++;
        }

        if (count > maxLen) 
        {
            maxLen = count;
        }
    }
    printf("%d\n", maxLen);

    return 0;
}
