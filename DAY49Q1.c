/*Q97: Print the initials of a name.

/*
Sample Test Cases:
Input 1:
John Doe
Output 1:
J.D.

*/

#include <stdio.h>

int main() 
{
    char first[50], last[50];
    
    scanf("%s %s", first, last);
    
    if (first[0] >= 'a' && first[0] <= 'z') first[0] -= 32;
    if (last[0] >= 'a' && last[0] <= 'z') last[0] -= 32;
    
    printf("%c.%c.\n", first[0], last[0]);
    
    return 0;
}
