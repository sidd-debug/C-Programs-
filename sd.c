#include <stdio.h>
#include <string.h>

char *upper(char *str)
{
    int a = strlen(str);
    for (int i = 0; i < a; i++)
    {
        str[i] = str[i] - 32;
    }
    return str;
}

int main()
{
    char str[10];
    gets(str);
    puts(strupr(str));

    puts(upper(str));
}