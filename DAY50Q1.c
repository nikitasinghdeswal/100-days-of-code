/*Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.

/*
Sample Test Cases:
Input 1:
15/04/2025
Output 1:
15-Apr-2025

*/
#include <stdio.h>

int main() 
{
    int day, month, year;
    char *months[] = {"", "Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
    
    if (scanf("%d/%d/%d", &day, &month, &year) == 3) 
    {
        printf("%02d-%s-%d\n", day, months[month], year);
    }
    
    return 0;
}
