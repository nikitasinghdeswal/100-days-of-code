//Q5: Write a program to convert temperature from Celsius to Fahrenheit.

/*
Sample Test Cases:
Input 1:
0
Output 1:
Fahrenheit=32

Input 2:
100
Output 2:
Fahrenheit=212

*/
#include<stdio.h>
int main()
{ float celsius, farhenheit;
printf("Enter temperature in celsius: ");
scanf("%f", &celsius);
farhenheit = (celsius * 9 / 5) + 32;
printf("Temperature in farhenheit: %.2f", farhenheit);
return 0;
}
