//Create, Open and Close a File
#include <stdio.h>

void main()
{
    FILE *fp;

    fp = fopen("sample.txt", "w"); 

    if(fp == NULL)
    {
        printf("File cannot be opened");
        return 1;
    }

    printf("File created and opened successfully");

    fclose(fp);  

}
