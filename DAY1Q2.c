// Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

/*
Sample Test Cases:
Input 1:
10 2
Output 1:
Sum=12, Diff=8, Product=20, Quotient=5

Input 2:
7 3
Output 2:
Sum=10, Diff=4, Product=21, Quotient=2

*/
#include<stdio.h>
int main()
{ int a;
int b;
int c;
int d;
int e;
int f;
int g;
int h;
scanf("%d", &a);
scanf("%d", &b);
e = a + b;
f = a - b;
g = a * b;
if (b == 0) {
    h = 0;
} else {
    h = a / b;
}
printf("Sum=%d, Diff=%d, Product=%d, Quotient=%d\n" , e , f , g , h);
return 0;
}
