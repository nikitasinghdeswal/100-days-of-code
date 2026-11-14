/*Q143: Find and print the student with the highest marks.

/*
Sample Test Cases:
Input 1:
3 students: Ravi 101 95, Sita 102 85, Aman 103 88
Output 1:
Topper: Ravi (Marks: 95)

*/
#include <stdio.h>

struct Student
{
    char name[50];
    int roll;
    int marks;
};

int main()
{
    struct Student s[3];
    int max = 0;
    int n;

    scanf("%d students:", &n);

    for(int i = 0; i < n; i++)
    {
        scanf(" %s %d %d", s[i].name, &s[i].roll, &s[i].marks);

        if(i < n - 1)
        {
            scanf(" ,");
        }
    }

    for(int i = 1; i < n; i++)
    {
        if(s[i].marks > s[max].marks)
        {
            max = i;
        }
    }

    printf("Topper: %s (Marks: %d)", s[max].name, s[max].marks);

    return 0;
}
