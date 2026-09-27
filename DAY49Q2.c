Q98: Print initials of a name with the surname displayed in full.

/*
Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe

*/
#include <stdio.h>

int main()
 {
    char str[100];
    int len = 0;
    char ch;
    
    while ((ch = getchar()) != '\n' && ch != EOF) 
    {
        str[len++] = ch;
    }
    str[len] = '\0';
    
    int last_space = -1;
    for (int i = 0; i < len; i++) 
    {
        if (str[i] == ' ') {
            last_space = i;
        }
    }
    
    if (str[0] >= 'a' && str[0] <= 'z') str[0] -= 32;
    printf("%c.", str[0]);
    
    for (int i = 0; i < last_space; i++)
     {
        if (str[i] == ' ') 
        {
            char initial = str[i + 1];
            if (initial >= 'a' && initial <= 'z') initial -= 32;
            printf("%c.", initial);
        }
    }
    
    int surname_start = last_space + 1;
    if (str[surname_start] >= 'a' && str[surname_start] <= 'z') 
    {
        str[surname_start] -= 32;
    }
    printf(" %s\n", &str[surname_start]);
    
    return 0;
} 
