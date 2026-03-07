//Demonstrate fseek() and rewind()
#include <stdio.h>

void main()
{
    FILE *fp;
    char ch;

    fp = fopen("sample.txt", "r");

    if(fp == NULL)
    {
        printf("File not found");
        return 1;
    }

    fseek(fp, 5, SEEK_SET);  
    ch = fgetc(fp);
    printf("Character after fseek: %c\n", ch);

    rewind(fp); 
    ch = fgetc(fp);
    printf("First character after rewind: %c\n", ch);

    fclose(fp);

}
