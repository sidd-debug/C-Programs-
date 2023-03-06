#include<stdio.h>


int factorial (int a)
{
    for (int i = a; i>1 ; i--)
    {
        a = a * (i-1);
    }

    return(a);
    
}

int main()
{
    int a;
    printf("enter the factorial number");
    scanf("%d",&a);
    printf("factorial is %d",factorial(a));
    return 0;

}