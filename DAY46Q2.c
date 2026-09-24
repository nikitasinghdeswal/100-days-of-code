/*Q92: Find the first repeating lowercase alphabet in a string.

/*
Sample Test Cases:
Input 1:
stress
Output 1:
s

*/
#include <stdio.h>

int main()
 {
    char str[100];
    int count[26] = {0};
    int i;
    if (scanf("%99s", str) != 1) 
    {
        return 0;
    }

    for (i = 0; str[i] != '\0'; i++)
     {
        if (str[i] >= 'a' && str[i] <= 'z') 
        {
            count[str[i] - 'a']++;
        }
    }

    for (i = 0; str[i] != '\0'; i++) 
    {
        if (str[i] >= 'a' && str[i] <= 'z' && count[str[i] - 'a'] > 1) 
        {
            printf("%c\n", str[i]);
            return 0;
        }
    }

    return 0;
}
