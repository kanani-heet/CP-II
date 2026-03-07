//Demonstrate fprintf(), fscanf(), fputc(), fgetc()
#include <stdio.h>

void main()
{
    FILE *fp;
    char ch;
    int num;

    fp = fopen("data.txt", "w");

    fprintf(fp, "Number: %d\n", 100);   
    fputc('A', fp);                    

    fclose(fp);

    fp = fopen("data.txt", "r");

    fscanf(fp, "Number: %d", &num);    
    printf("Read Number = %d\n", num);

    ch = fgetc(fp);                     
    printf("Read Character = %c\n", ch);

    fclose(fp);

}
