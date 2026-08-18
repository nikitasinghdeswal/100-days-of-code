//Q17: Write a program to find the roots of a quadratic equation and categorize them.

/*
Sample Test Cases:
Input 1:
1 -3 2
Output 1:
Roots are real and different: 2, 1

Input 2:
1 -2 1
Output 2:
Roots are real and same: 1

Input 3:
1 2 5
Output 3:
Roots are complex

*/
#include<stdio.h>
#include<math.h>
int main()
{
    float a;
    float b;
    float c;
    float d;
    scanf("%f %f %f", &a, &b, &c);
    if ( b*b - 4*a*c >0)
    {
        printf("Roots are real and distinct: %.2f, %.2f" , (-b + sqrt(b*b - 4*a*c))/(2*a), (-b - sqrt(b*b -4*a*c))/ (2*a));   
    }
else if ( b*b - 4*a*c ==0)
{ 
    printf("Roots are real and same: %.2f", -b/(2*a));

}
else if ( b*b - 4*a*c <0)
{
    printf("Roots are complex");

}
return 0;
}
