// Q41: Write a program to swap the first and last digit of a number.
#include <stdio.h>
#include <math.h>

int main()
{
    int num, first_digit, last_digit, digits, swapped_num;
    scanf("%d", &num);

    last_digit = num % 10;
    digits = (int)log10(num);
    first_digit = (int)(num / pow(10, digits));
    swapped_num = last_digit * (int)pow(10, digits);
    swapped_num += num % (int)pow(10, digits);
    swapped_num -= last_digit;
    swapped_num += first_digit;
    printf("%d\n", swapped_num);

    return 0;
}
