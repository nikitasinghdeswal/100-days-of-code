/*Q96: Reverse each word in a sentence without changing the word order.

/*
Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc

*/
#include <stdio.h>

int main() 
{
    char str[1000];
    
    if (fgets(str, sizeof(str), stdin) == NULL)
     {
        return 0;
    }
    
    int len = 0;
    while (str[len] != '\0')
     {
        len++;
    }
    
    if (len > 0 && str[len - 1] == '\n') 
    {
        str[len - 1] = '\0';
        len--;
    }
    
    int start = 0;
    for (int i = 0; i <= len; i++)
     {
        if (str[i] == ' ' || str[i] == '\0') 
        {
            int left = start;
            int right = i - 1;
            
            while (left < right) 
            {
                char temp = str[left];
                str[left] = str[right];
                str[right] = temp;
                left++;
                right--;
            }
            start = i + 1;
        }
    }
    
    printf("%s\n", str);
    
    return 0;
}
