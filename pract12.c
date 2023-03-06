#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    int alpha, dig, splch, i;
    alpha = dig = splch = i = 0;
        int y=0;

    //printf("Count total number of alphabets, digits and special characters :\n");
    printf("Input the string : ");
    scanf("%s",str);

   while(str[i]!='\0')
    {
        if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
        {
            alpha++;
        }
        else if(str[i]>=48 && str[i]<=57)
        {
            y++;
        }
        else
        {
            splch++;
        }

        i++;
    }

    printf("Number of Alphabets in the string is : %d\n", alpha);
    printf("Number of Digits in the string is : %d\n", y);
    printf("Number of Special characters in the string is : %d\n", splch);



}