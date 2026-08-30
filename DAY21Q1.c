//Q42 : Write a program to check if a number is a perfect number.
#include <stdio.h>
int main()
{
    int num, sum = 0, i;
    if (scanf("%d", &num) != 1)
    {
        printf("Invalid input.\n");
        return 1;
    }
    if (num <= 0)
    {
        printf("Not perfect number\n");
        return 0;
    }
    for (i = 1; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            sum += i;
        }
    }
    if (sum == num)
    {
        printf("Perfect number\n");
    }
    else
    {
        printf("Not perfect number\n");
    }
    return 0;
}
