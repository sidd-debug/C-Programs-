#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *p1, *p2;
    char s[100],c;
    printf("Enter data");
    scanf("%s",s);

    p1 = fopen(s, "r");
    if (p1==NULL)
    {
        printf("Cannot open file %s \n",s);
        exit(0);
    }
    printf("Enter the filename to open for writing \n");
    scanf("%s",s);

    p2 = fopen(s, "w");
    if (p2 == NULL)
    {
        printf("Cannot open file %s \n",s);
        exit(0);
    }

    c = fgetc(p1);
    while (c != EOF)
    {
        fputc(c, p2);
        c = fgetc(p1);
    }
    printf("\n contents copied to %s ",s);

    fclose(p1);
    fclose(p2);
    return 0; 

}
