/*Q86: Check if a string is a palindrome.

/*
Sample Test Cases:
Input 1:
madam
Output 1:
Palindrome

Input 2:
hello
Output 2:
Not palindrome

*/
#include <stdio.h>

int main()
 {
    char s[100];
    scanf("%s", s);
    
    int i = 0, j = 0;
    while (s[j]) j++;
    j--;
    
    while (i < j && s[i] == s[j]) 
    {
        i++;
        j--;
    }
    
    if (i >= j) printf("Palindrome");
    else printf("Not palindrome");
    
    return 0;
}
