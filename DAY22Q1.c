//Q43: Write a program to check if a number is a strong number.

/*
Sample Test Cases:
Input 1:
145
Output 1:
Strong number

Input 2:
123
Output 2:
Not strong number

*/
#include <stdio.h>
int main()
 {
    int a;
    int b; 
    int sum = 0;
    scanf("%d", &a);
    b = a; 
    while (a > 0) 
    {
        int digit = a % 10; 
        int fact = 1;
        for (int i = 1; i <= digit; i++) 
        {
            fact = fact * i;
        }
        sum = sum + fact; 
        a = a / 10; 
    }
    if (sum == b) 
    {
        printf("Strong number\n");
    } 
    else
     {
        printf("Not a Strong number\n");
    }
    return 0;
}
