/*Q91: Remove all vowels from a string.

/*
Sample Test Cases:
Input 1:
education
Output 1:
dctn

*/
#include <stdio.h>

int main() 
{
    char str[100];
    int i, j = 0;

    if (scanf("%99s", str) != 1) 
    {
        return 0;
    }

    for (i = 0; str[i] != '\0'; i++) 
    {
        char ch = str[i];
        if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u' &&
            ch != 'A' && ch != 'E' && ch != 'I' && ch != 'O' && ch != 'U')
             {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';

    printf("%s\n", str);

    return 0;
}
