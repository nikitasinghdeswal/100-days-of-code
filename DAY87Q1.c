/*Q137: Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.

/*
Sample Test Cases:
Input 1:
GUEST
Output 1:
Welcome Guest!

*/
#include <stdio.h>
#include <string.h>

enum roles
{
    ADMIN,
    USER,
    GUEST
};

int main()
{
    char role[20];

    scanf("%s", role);

    switch (strcmp(role, "ADMIN") == 0 ? ADMIN :
            strcmp(role, "USER") == 0 ? USER : GUEST)
    {
        case ADMIN:
            printf("Welcome Admin!");
            break;

        case USER:
            printf("Welcome User!");
            break;

        case GUEST:
            printf("Welcome Guest!");
            break;
    }

    return 0;
}
