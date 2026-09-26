/*Q95: Check if one string is a rotation of another.

/*
Sample Test Cases:
Input 1:
abcde
deabc
Output 1:
Rotation

Input 2:
abc
acb
Output 2:
Not rotation

*/
#include <stdio.h>

int main() 
{
    char s1[100], s2[100];
    
    scanf("%s", s1);
    scanf("%s", s2);
    
    int len1 = 0;
    while (s1[len1] != '\0')
     {
        len1++;
    }
    
    int len2 = 0;
    while (s2[len2] != '\0')
     {
        len2++;
    }
    
    if (len1 != len2) 
    {
        printf("Not rotation\n");
        return 0;
    }
    
    char temp[200];
    for (int i = 0; i < len1; i++) 
    {
        temp[i] = s1[i];
        temp[i + len1] = s1[i];
    }
    temp[2 * len1] = '\0';
    
    int is_rotation = 0;
    for (int i = 0; i <= len1; i++)
     {
        int match = 1;
        for (int j = 0; j < len2; j++)
         {
            if (temp[i + j] != s2[j])
             {
                match = 0;
                break;
            }
        }
        if (match == 1)
         {
            is_rotation = 1;
            break;
        }
    }
    
    if (is_rotation == 1)
     {
        printf("Rotation\n");
    }
     else
      {
        printf("Not rotation\n");
    }
    
    return 0;
}
