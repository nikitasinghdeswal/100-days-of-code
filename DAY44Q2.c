/*Q88: Replace spaces with hyphens in a string.

/*
Sample Test Cases:
Input 1:
hello world
Output 1:
hello-world

*/
#include <stdio.h>

int main() {
    char text[100];

    fgets(text, 100, stdin);

    int i = 0;
    while (text[i] != '\0' && text[i] != '\n') {
        if (text[i] == ' ') {
            text[i] = '-';
        }
        printf("%c", text[i]);
        i++;
    }
    printf("\n");

    return 0;
}
