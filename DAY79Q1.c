/*Q129: A file numbers.txt contains a list of integers separated by spaces. Read all integers, compute their sum and average, and print both.

/*
Sample Test Cases:
Input 1:
File: numbers.txt (Content: 10 20 30 40 50)
Output 1:
Sum = 150
Average = 30.00

*/
#include <stdio.h>

int main()
{
    FILE *fp;
    int num, sum = 0, count = 0;
    float average;

    fp = fopen("numbers.txt", "w");

    if (fp == NULL)
    {
        printf("File cannot be opened");
        return 1;
    }

    while (scanf("%d", &num) == 1)
    {
        fprintf(fp, "%d ", num);
        sum = sum + num;
        count++;

        if (getchar() == '\n')
            break;
    }

    fclose(fp);

    if (count > 0)
    {
        average = (float)sum / count;

        printf("Sum = %d\n", sum);
        printf("Average = %.2f\n", average);
    }

    return 0;
}
