//Q31: Write a program to take a number as input and print its equivalent binary representation.

/*
Sample Test Cases:
Input 1:
10
Output 1:
1010

Input 2:
7
Output 2:
111

*/
#include <stdio.h>

int main() {
    int num;
    int binaryNum[32];
    int i = 0;
    
    if (scanf("%d", &num) != 1) {
        printf("Invalid input.\n");
        return 1;
    }
    if (num == 0) {
        printf("0\n");
        return 0;
    }
    int originalNum = num;
    while (num > 0) {
        binaryNum[i] = num % 2; 
        num = num / 2;          
        i++;                    
    }
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binaryNum[j]);
    }
    printf("\n");

    return 0;
}
