/*Q127: Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt.

/*
Sample Test Cases:
Input 1:
Input File (input.txt): Hello World\nC programming
Output 1:
Output File (output.txt): HELLO WORLD\nC PROGRAMMING

*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
 {
    char str[1000];
    int i;
    FILE *fp;

    fgets(str, sizeof(str), stdin);

    char *p = strstr(str, "Input File (input.txt):");
    if (p != NULL)
        p += strlen("Input File (input.txt):");
    else
        p = str;

    while (*p == ' ')
        p++;

    fp = fopen("output.txt", "w");

    if (fp == NULL)
        return 1;

    fprintf(fp, "%s", "");
    for (i = 0; p[i] != '\0' && p[i] != '\n'; i++)
     {
        if (p[i] == '\\' && p[i + 1] == 'n') 
        {
            fputc('\n', fp);
            i++;
        }
         else 
         {
            fputc(toupper((unsigned char)p[i]), fp);
        }
    }

    fclose(fp);

    fp = fopen("output.txt", "r");

    printf("Output File (output.txt): ");
    int ch;
    while ((ch = fgetc(fp)) != EOF)
        putchar(ch);

    fclose(fp);

    return 0;
}
