/*Q23: Write a program to calculate library fine based on late days as follows:
First 5 days late: ₹2/day 
Next 5 days late: ₹4/day 
Next 20 days days late: ₹6/day 
More than 30 days: Membership Cancelled.*/

/*
Sample Test Cases:
Input 1:
4
Output 1:
Fine ₹8

Input 2:
8
Output 2:
Fine ₹22

Input 3:
15
Output 3:
Fine ₹60

Input 4:
31
Output 4:
Membership Cancelled

*/
#include <stdio.h>
#include<windows.h>
int main() { SetConsoleOutputCP(65001);
    int days;
    int fine = 0;

    // Read the number of late days from the user
    if (scanf("%d", &days) != 1) {
        printf("Invalid input\n");
        return 1;
    }

    // Process fine tiers using if-else logic
    if (days <= 0) {
        fine = 0;
        printf("Fine ₹%d\n", fine);
    } else if (days <= 5) {
        fine = days * 2;
        printf("Fine ₹%d\n", fine);
    } else if (days <= 10) {
        // First 5 days at ₹2 + remaining days at ₹4
        fine = (5 * 2) + ((days - 5) * 4);
        printf("Fine ₹%d\n", fine);
    } else if (days <= 30) {
        // First 5 days at ₹2 (10) + Next 5 days at ₹4 (20) + remaining days at ₹6
        fine = 10 + 20 + ((days - 10) * 6);
        printf("Fine ₹%d\n", fine);
    } else {
        printf("Membership Cancelled\n");
    }

    return 0;
}
