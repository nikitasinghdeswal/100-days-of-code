/*Q140: Define a struct with enum Gender and print person's gender.

/*
Sample Test Cases:
Input 1:
Gender=MALE
Output 1:
Male

*/

#include <stdio.h>

enum Gender
{
    MALE,
    FEMALE
};

struct Person
{
    enum Gender gender;
};

int main()
{
    struct Person p;
    char gender[20];

    scanf("Gender=%s", gender);

    if (strcmp(gender, "MALE") == 0)
    {
        p.gender = MALE;
        printf("Male");
    }
    else if (strcmp(gender, "FEMALE") == 0)
    {
        p.gender = FEMALE;
        printf("Female");
    }

    return 0;
}
