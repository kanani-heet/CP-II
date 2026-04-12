//Count Characters, Spaces, Tabs and New Lines in a File
#include <stdio.h>

void main()
{
    FILE *fp;
    char ch;
    int chars=0, spaces=0, tabs=0, lines=0;

    fp = fopen("text.txt", "r");

    if(fp == NULL)
    {
        printf("File not found");
        return 1;
    }

    while((ch = fgetc(fp)) != EOF)
    {
        chars++;

        if(ch == ' ')
            spaces++;

        if(ch == '\t')
            tabs++;

        if(ch == '\n')
            lines++;
    }

    printf("Characters = %d\n", chars);
    printf("Spaces = %d\n", spaces);
    printf("Tabs = %d\n", tabs);
    printf("Lines = %d\n", lines);

    fclose(fp);

}
