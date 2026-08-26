//Q33: Write a program to check if a number is an Armstrong number.

/*
Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong

*/
#include <stdio.h>
#include <math.h> 

int main() {
    int num, original_num, temp, digit;
    int num_digits = 0;
    int sum_of_powers = 0;

    
    if (scanf("%d", &num) != 1) {
        return 1;
    }

    original_num = num;
    temp = num;

    
    while (temp > 0) {
        num_digits++;
        temp /= 10; 
    }


    temp = original_num;

    
    while (temp > 0) {
        digit = temp % 10; 
        
        
        sum_of_powers += round(pow(digit, num_digits)); 
        
        temp /= 10; 
    }

    
    if (sum_of_powers == original_num) {
        printf("Armstrong\n");
    } else {
        printf("Not Armstrong\n");
    }

    return 0;
}
