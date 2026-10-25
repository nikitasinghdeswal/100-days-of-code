/*Q123: Read a text file and count the total number of characters, words, and lines. A word is defined as a sequence of non-space characters separated by spaces or newlines.

/*
Sample Test Cases:
Input 1:
File: sample.txt (Content: Hello world\nThis is C programming)
Output 1:
Characters: 31
Words: 6
Lines: 2

*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
 {
    char input[1000], filename[100], content[800];
    FILE *fp;
    int characters = 0, words = 0, lines = 0;
    int i, inWord = 0;

    fgets(input, sizeof(input), stdin);

    sscanf(input, "File: %99s (Content:", filename);

    char *start = strstr(input, "(Content: ");
    if (start == NULL)
     {
        return 0;
    }

    start += 10;
    char *end = strstr(start, ")");
    if (end != NULL) 
    {
        *end = '\0';
    }

    strcpy(content, start);

    for (i = 0; content[i] != '\0'; i++)
     {
        if (content[i] == '\\' && content[i + 1] == 'n') 
        {
            content[i] = '\n';
            memmove(&content[i + 1], &content[i + 2],
                    strlen(&content[i + 2]) + 1);
        }
    }

    fp = fopen(filename, "w");
    if (fp == NULL)
     {
        return 0;
    }

    fputs(content, fp);
    fclose(fp);

    fp = fopen(filename, "r");
    if (fp == NULL) 
    {
        return 0;
    }

    int ch;
    int lastChar = '\0';

    while ((ch = fgetc(fp)) != EOF)
     {
        characters++;

        if (ch == '\n')
        {
            lines++;
        }

        if (ch == ' ' || ch == '\n' || ch == '\t') 
        {
            inWord = 0;
        } else if (!inWord)
         {
            words++;
            inWord = 1;
        }

        lastChar = ch;
    }

    if (characters > 0 && lastChar != '\n')
     {
        lines++;
    }

    fclose(fp);

    printf("Characters: %d\n", characters);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);

    return 0;
}
