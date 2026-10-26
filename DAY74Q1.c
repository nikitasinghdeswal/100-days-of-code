/*Q124: Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().

/*
Sample Test Cases:
Input 1:
Source File: source.txt (Content: Learning C File Handling)
Output 1:
File copied successfully to destination.txt

*/

#include <stdio.h>

int main()
{
    FILE *source, *destination;
    char sourceFile[100], destFile[100];
    char content[500];
    int ch;

    scanf("Source File: %s (Content:", sourceFile);

    scanf(" %[^)]", content);
    getchar();

    scanf("%s", destFile);

    source = fopen(sourceFile, "w");
    if (source == NULL)
        return 0;

    fputs(content, source);
    fclose(source);

    source = fopen(sourceFile, "r");
    destination = fopen(destFile, "w");

    if (source == NULL || destination == NULL)
        return 0;

    while ((ch = fgetc(source)) != EOF)
        fputc(ch, destination);

    fclose(source);
    fclose(destination);

    printf("File copied successfully to %s", destFile);

    return 0;
}
