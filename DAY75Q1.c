/*Q125: Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.

/*
Sample Test Cases:
Input 1:
Existing File: data.txt (Content before execution: Hello world)
User Input: This is appended text.
Output 1:
File updated successfully with appended text.

*/
#include <stdio.h>

int main()
{
    FILE *fp;
    char filename[100];
    char content[500];
    char newText[500];

    scanf("Existing File: %s (Content before execution:", filename);
    scanf(" %[^)]", content);
    getchar();

    scanf(" User Input: %[^\n]", newText);

    fp = fopen(filename, "w");

    if (fp == NULL)
        return 0;

    fprintf(fp, "%s", content);
    fclose(fp);

    fp = fopen(filename, "a");

    if (fp == NULL)
        return 0;

    fprintf(fp, "\n%s", newText);
    fclose(fp);

    printf("File updated successfully with appended text.");

    return 0;
}
