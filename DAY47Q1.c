/*Q93: Check if two strings are anagrams of each other.

/*
Sample Test Cases:
Input 1:
listen
silent
Output 1:
Anagrams

Input 2:
hello
world
Output 2:
Not anagrams

*/
#include <stdio.h>

int main()
 {
    char str1[100], str2[100];
    int count[256] = {0};
    int i = 0, j = 0;

    scanf("%s", str1);
    scanf("%s", str2);

    while (str1[i] != '\0')
     {
        count[(unsigned char)str1[i]]++;
        i++;
    }

    while (str2[j] != '\0') 
    {
        count[(unsigned char)str2[j]]--;
        j++;
    }

    if (i != j)
     {
        printf("Not anagrams\n");
        return 0;
    }

    for (int k = 0; k < 256; k++)
     {
        if (count[k] != 0) {
            printf("Not anagrams\n");
            return 0;
        }
    }

    printf("Anagrams\n");
    return 0;
}
