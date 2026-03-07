//Count Vowels in a String
#include <stdio.h>

void main(int argc, char *argv[])
{
    int i, count = 0;
    char *str = argv[1];

    while(str[i] != '\0')
    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||
           str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
        {
            count++;
        }
        i++;
    }

  
}
