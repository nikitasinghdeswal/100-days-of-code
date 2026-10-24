/*Q122: Write a C program that opens an existing file (e.g., info.txt) and reads its contents using fgets(). The program should print all the lines to the console until EOF (end of file) is reached.

/*
Sample Test Cases:
Input 1:
File: info.txt (Content: Name: Rahul\nAge: 23)
Output 1:
Name: Rahul
Age: 23

*/
#include <stdio.h>
#include <string.h>

int main()
{
    char input[1000], filename[100];
    char content[900];
    FILE *fp;
    int i, j;

    fgets(input, sizeof(input), stdin);

    char *start = strstr(input, "File: ");
    if (start == NULL)
        return 0;

    start += 6;

    i = 0;
    while (start[i] != ' ' && start[i] != '\0')
    {
        filename[i] = start[i];
        i++;
    }
    filename[i] = '\0';

    char *text = strstr(input, "Content: ");
    if (text == NULL)
        return 0;

    text += 9;
    char *end = strstr(text, ")");
    if (end != NULL)
        *end = '\0';

    i = 0;
    j = 0;
    while (text[i] != '\0')
    {
        if (text[i] == '\\' && text[i + 1] == 'n')
        {
            content[j++] = '\n';
            i += 2;
        }
        else
        {
            content[j++] = text[i++];
        }
    }
    content[j] = '\0';

    fp = fopen(filename, "w");
    if (fp == NULL)
        return 1;

    fputs(content, fp);
    fclose(fp);

    fp = fopen(filename, "r");
    if (fp == NULL)
        return 1;

    char line[200];
    while (fgets(line, sizeof(line), fp) != NULL)
        printf("%s", line);

    fclose(fp);

    return 0;
}
