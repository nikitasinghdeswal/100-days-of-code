/*Q85: Reverse a string.

/*
Sample Test Cases:
Input 1:
abcd
Output 1:
dcba

*/
#include <stdio.h>
int main() 
{
    char s[100];
    scanf("%s", s);
    int l = 0;
    while (s[l]) l++;
    while (l--) printf("%c", s[l]);
    return 0;
}
