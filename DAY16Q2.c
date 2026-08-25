//Q32: Write a program to check if a number is a palindrome.

/*
Sample Test Cases:
Input 1:
121
Output 1:
Palindrome

Input 2:
123
Output 2:
Not palindrome

*/#include <stdio.h>

int main() {
    int n, reversed = 0, remainder, original;

    scanf("%d", &n);

    
    original = n;

    while (n != 0) {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }

    if (original == reversed) {
        printf("Palindrome\n", original);
    } else {
        printf("Not a palindrome\n", original);
    }

    return 0;
}
