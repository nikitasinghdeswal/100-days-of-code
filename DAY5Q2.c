//Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.

/*
Sample Test Cases:
Input 1:
1000 5 2
Output 1:
Simple Interest=100, Compound Interest=102.5

Input 2:
5000 7 3
Output 2:
Simple Interest=1050, Compound Interest=1125.76

*/
#include<stdio.h>
#include<math.h>
int main()
{ float principle, rate, time, simple_interest, compound_interest;
    printf("Enter principle amount, rate of interest and time ");
    scanf("%f %f %f", &principle, &rate, &time);
    simple_interest = (principle * rate * time) / 100;
    compound_interest = principle * (pow(1 + rate/100, time)) - principle;
    printf("Simple Interest = %.2f\n", simple_interest);
    printf("Compound Interest = %.2f\n", compound_interest);
    return 0;
}
