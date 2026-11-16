/*Q145: Return a structure containing top student's details from a function.

/*
Sample Test Cases:
Input 1:
3 students: Riya 101 89, Karan 102 96, Meena 103 92
Output 1:
Top Student: Karan | Roll: 102 | Marks: 96

*/
#include <stdio.h>

struct Student
{
    char name[50];
    int roll;
    int marks;
};

struct Student findTopper(struct Student s[], int n)
{
    int i, max = 0;

    for(i = 1; i < n; i++)
    {
        if(s[i].marks > s[max].marks)
        {
            max = i;
        }
    }

    return s[max];
}

int main()
{
    struct Student s[10], top;
    int n, i;

    scanf("%d students:", &n);

    for(i = 0; i < n; i++)
    {
        scanf(" %[^0-9] ", s[i].name);

        // Remove extra spaces from name
        int j = 0;
        while(s[i].name[j] != '\0')
        {
            j++;
        }

        if(j > 0 && s[i].name[j-1] == ' ')
            s[i].name[j-1] = '\0';

        scanf("%d %d", &s[i].roll, &s[i].marks);

        if(i < n-1)
            scanf(",");
    }

    top = findTopper(s, n);

    printf("Top Student: %s | Roll: %d | Marks: %d",
           top.name, top.roll, top.marks);

    return 0;
}
