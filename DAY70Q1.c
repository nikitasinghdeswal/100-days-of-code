/*Q120: Write a program to take a string input. Change it to sentence case.

/*
Sample Test Cases:
Input 1:
str = I am trying to build logic.
Output 1:
I Am Trying To Build Logic

Input 2:
str = The classes are supposed to start early.
Output 2:
The Classes Are Supposed To Start Early.

Input 3:
str = We are going to look at 26 different test cases.
Output 3:
We Are Going To Look At 26 Different Test Cases.

*/
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
 {
    char str[1000];
    int i, newWord = 1;

    fgets(str, sizeof(str), stdin);

    char *p = strchr(str, '=');
    if (p != NULL)
     {
        memmove(str, p + 1, strlen(p + 1) + 1);
    }

    for (i = 0; str[i] != '\0'; i++) 
    {
        if (isalpha((unsigned char)str[i])) 
        {
            if (newWord) 
            {
                str[i] = toupper((unsigned char)str[i]);
                newWord = 0;
            } 
            else 
            {
                str[i] = tolower((unsigned char)str[i]);
            }
        }
         else
          {
            if (isspace((unsigned char)str[i]))
             {
                newWord = 1;
            }
        }
    }

    str[strcspn(str, "\n")] = '\0';

    int len = strlen(str);
    while (len > 0 && isspace((unsigned char)str[len - 1])) 
    {
        str[--len] = '\0';
    }

    printf("%s", str);

    return 0;
}
