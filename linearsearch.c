#include<stdio.h>

int main()
{
    int i,f;
    int a[5];

    printf("enter number");
    for (i = 0; i < 5; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter index to be found");
    scanf("%d",&f);
    for (i = 0; i < 5; i++)
    {
        if(f == a[i])
        {
            printf("%d found at index %d",f,i);
            break;
        }
    }

    return 0;

    
}