/*Q94: Find the longest word in a sentence.

/*
Sample Test Cases:
Input 1:
I love programming
Output 1:
programming

*/
#include <stdio.h>

int main()
 {
    char sentence[1000];
    int i = 0, start = 0, len = 0;
    int max_len = 0, max_start = 0;

    scanf(" %[^\n]", sentence);

    while (1) 
    {
        if (sentence[i] == ' ' || sentence[i] == '\0') 
        {
            if (len > max_len)
             {
                max_len = len;
                max_start = start;
            }
            if (sentence[i] == '\0') 
            {
                break;
            }
            len = 0;
            start = i + 1;
        } 
        else
         {
            len++;
        }
        i++;
    }

    for (int k = max_start; k < max_start + max_len; k++) 
    {
        putchar(sentence[k]);
    }
    putchar('\n');

    return 0;
}
