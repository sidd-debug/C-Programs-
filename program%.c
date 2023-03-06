#include<stdio.h>

int main()
{
    int fib[10];
    int i;

    fib[0] = 0;
    fib[1] = 1;

    for (i = 2; i < 24; i++)
    {
        fib[i] = fib[i-1] + fib[i-2]
    }
    
}